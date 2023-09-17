#include <stdio.h>
#include <stdlib.h>

void citireVector(int *array, int *size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
    {
        scanf("%d", array+i);
    }
}

void printareVector(int *array, int size)
{
    for(int i=0; i<size; i++, size--)
    {
        for(int j=i; j<size; j++)
            if(j==i || j==size-1)
                printf("%d ", *(array+j));
    }
}

int main()
{
    int arr[1001], n;
    citireVector(arr, &n);
    printareVector(arr, n);
    return 0;
}
