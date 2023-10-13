#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void firstElement(int* array, int size, int* first)
{
    *first = 0;
    for(int i=0; i<size; i++)
    {
        if(array[i]%2==1)
        {
            *first = i;
            break;
        }
    }
}

void lastElement(int* array, int size, int* last)
{
    *last = 0;
    for(int i=size-1; i>=0; i--)
    {
        if(array[i]%2==1)
        {
            *last = i;
            break;
        }
    }
}

void calculateSum(int* array, int size, int first, int last)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        if(i>=first && i<=last)
            sum += array[i];
    }
    printf("%d", sum);
}

int main()
{
    int arr[1000], dimension, begin, end;
    readArray(arr, &dimension);
    firstElement(arr, dimension, &begin);
    lastElement(arr, dimension, &end);
    calculateSum(arr, dimension, begin, end);
    return 0;
}
