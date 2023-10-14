#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void findSequence(int* array, int size)
{
    int left = 1;
    int right = 0;
    for(int i=0; i<size; i++)
        if(array[i+1]==array[i])
        {
            int j = i;
            while(j+1<size && array[j+1] == array[j])
                j++;
            if(j-i+1>=right-left+1)
                left = i, right = j;
            i = j;
        }
    printf("%d %d", left+1, right+1);
}

int main()
{
    int arr[1000], dimension;
    readArray(arr, &dimension);
    findSequence(arr, dimension);
    return 0;
}
