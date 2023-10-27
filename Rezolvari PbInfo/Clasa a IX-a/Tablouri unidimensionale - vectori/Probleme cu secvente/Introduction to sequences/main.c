#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void printSequences(int* array, int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int l=1; l+i+1<=size; l++)
        {
            for(int j=i; j<=i+l; j++)
                printf("%d ", array[j]);
            printf("\n");
        }
    }
}

int main()
{
    int arr[1001], dim;
    readArray(arr, &dim);
    printSequences(arr, dim);
    return 0;
}
