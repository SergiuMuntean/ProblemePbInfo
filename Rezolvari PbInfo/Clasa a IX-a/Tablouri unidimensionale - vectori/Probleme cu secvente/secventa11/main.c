#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int size)
{
    for(int i=0; i<size; i++)
        scanf("%d", array+i);
}

int binary(int number)
{
    if(number==0)
        return 0;
    while(number)
    {
        int rest = number%2;
        if(rest==0)
            return 0;
        number /= 2;
    }
    return 1;
}

void sequenceLength(int* array, int size)
{
    int left = 1;
    int right = 0;
    int length = 0;
    for(int i=0; i<size; i++)
    {
        if(binary(array[i])==1)
        {
            int j = i;
            while(j+1<size && binary(array[j+1])==1)
                j++;
            if(j-i+1>right-left+1)
            {
                left = i;
                right = j;
            }
            i = j;
        }
    }
    length = right - left + 1;
    printf("%d", length);
}

int main()
{
    int dimension;
    scanf("%d", &dimension);
    int *arr = malloc(dimension * sizeof(int));
    readArray(arr, dimension);
    sequenceLength(arr, dimension);
    return 0;
}
