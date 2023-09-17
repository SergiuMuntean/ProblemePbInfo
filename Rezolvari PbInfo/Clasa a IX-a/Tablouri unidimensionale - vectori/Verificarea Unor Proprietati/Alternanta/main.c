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
    int value = 1;
    for(int i=0; i<size-1; i++)
    {
        if(array[i]!=0 && array[i+1]!=0)
        {
            value = 0;
            break;
        }
    }
    if(value == 0)
        printf("NU");
    else
        printf("DA");
}

int main()
{
    int arr[1000], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
