#include <stdio.h>
#include <stdlib.h>

void readArray(int *array, int *size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
    {
        scanf("%d", array+i);
    }
}

void printArray(int *array, int size)
{
    for(int i=0; i<size; i++)
    {
        if(*(array+i)%array[size-1]==0)
            printf("%d ", *(array+i));
    }
}

int main()
{
    int arr[1001], n;
    readArray(arr, &n);
    printArray(arr, n);
    return 0;
}
