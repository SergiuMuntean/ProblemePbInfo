#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int modificariArray(int* array, int* array_nou, int* size)
{
    int detect = 0;
    int j = 0;
    int size_vechi;
    size_vechi = *size;
    for(int i=0; i<size_vechi; i++)
    {
        int value1 = abs(array[i]%2);
        int value2 = abs(array[i+1]%2);
        if(value1==value2 && array[i]!=array[i+1] && array[i]!=array[size_vechi-1])
        {
            *size = *size + 1;
            array_nou[j++] = array[i];
            array_nou[j++] = (int) ((array[i]+array[i+1])/2);
            detect = 1;
        }
        else
        {
            array_nou[j++] = array[i];
        }
    }
    if(detect == 1)
    {
        printf("\n");
        for(int k=0; k<*size; k++)
        {
            array[k] = array_nou[k];
            printf("%d ", array_nou[k]);
        }
    }
    return detect;
}

int main()
{
    int arr[200], arr_2[200], n;
    readArray(arr, &n);
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    while(modificariArray(arr, arr_2, &n)==1)
        modificariArray(arr, arr_2, &n);

    return 0;
}
