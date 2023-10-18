#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void longestSequence(int* array, int size)
{
    int st = 0;
    int dr = 0;
    int lmax = 1;
    int length;
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(array[j]==array[i])
                length = j-i+1;
            if(length>lmax)
            {
                lmax = length;
                st = i;
                dr = j;
            }
        }
    }
    printf("%d %d", st+1, dr+1);
}

int main()
{
    int arr[1000], dimension;
    readArray(arr, &dimension);
    longestSequence(arr, dimension);
    return 0;
}
