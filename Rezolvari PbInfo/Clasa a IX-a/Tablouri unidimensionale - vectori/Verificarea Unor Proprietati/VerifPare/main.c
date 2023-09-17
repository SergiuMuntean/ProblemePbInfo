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
    for(int i=0; i<size; i++)
        if(array[i]%2==1)
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
    int arr[100], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
