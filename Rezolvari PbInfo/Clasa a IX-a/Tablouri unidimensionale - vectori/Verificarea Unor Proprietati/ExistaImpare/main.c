#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void checker(int* array, int size)
{
    int contor = 0;
    for(int i=0; i<size; i++)
        if(array[i]%2==1)
        {
            contor = 1;
            break;
        }
    if(contor==1)
        printf("DA");
    else
        printf("NU");
}

int main()
{
    int arr[100], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
