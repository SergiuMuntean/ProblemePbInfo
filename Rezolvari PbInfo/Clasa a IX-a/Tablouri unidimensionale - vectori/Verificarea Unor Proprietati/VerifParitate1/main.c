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
    for(int i=0; i<size/2; i++)
    {
        if(array[i]%2!=array[size-i-1]%2)
            value = 0;
    }
    if(value == 1)
        printf("DA");
    else
        printf("NU");
}

int main()
{
    int arr[200], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
