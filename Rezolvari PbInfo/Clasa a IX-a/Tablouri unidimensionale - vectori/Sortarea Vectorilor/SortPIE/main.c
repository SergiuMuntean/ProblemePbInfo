#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int gcd(int n, int m)
{
    while(m)
    {
        int rest = n%m;
        n = m;
        m = rest;
    }
    return n;
}

void adjustArray(int* array, int size, int* newArray, int* newSize)
{
    int j = 0;
    for(int i=0; i<size; i++)
        if(gcd(array[size-1], array[i])==1)
            newArray[j++] = array[i];
    *newSize = j;
}

void sortArray(int* array, int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j = s2; j<size; j++)
        {
            if(array[i]<array[j])
            {
                int aux = array[j];
                array[j] = array[i];
                array[i] = aux;
            }
        }
    }
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
}

int main()
{
    int arr[1000], newArr[1000] , dimension, newDimension;
    readArray(arr, &dimension);
    adjustArray(arr, dimension, newArr, &newDimension);
    sortArray(newArr, newDimension);
    return 0;
}
