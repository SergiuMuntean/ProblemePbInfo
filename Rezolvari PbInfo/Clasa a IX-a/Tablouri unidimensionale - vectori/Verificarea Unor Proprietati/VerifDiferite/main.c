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
    for(int i=0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                value = 0;
                break;
            }
        }
    }
    if(value==1)
        printf("DA");
    else if(value==0)
        printf("NU");
}

int main()
{
    int arr[500], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
