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
    int detect = 1;
    for(int i=1; i<size; i++)
        if(array[i]!=array[0])
        {
            detect = 0;
            break;
        }
    if(detect == 0)
        printf("NU");
    else
        printf("DA");
}

int main()
{
    int arr[500], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
