#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int countDivisors(int number)
{
    int value = 0;
    for(int d=1; d*d<=number; d++)
    {
        if(number%d==0)
            value+=2;
        if(d*d==number)
            value--;
    }
    return value;
}

void extractPrimeNumbers(int* array, int* newArray, int size, int* newSize)
{
    int j = 0;
    for(int i=0; i<size; i++)
        if(countDivisors(array[i])==2)
            newArray[j++] = array[i];
    *newSize = j;
}

void sortArray(int* array, int size)
{
    int length = size;
    int sortat;
    do{
        sortat = 1;
        for(int i=0; i<size-1; i++)
            if(array[i]>array[i+1])
            {
                sortat = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        size--;
    }while(!sortat);
    for(int i=0; i<length; i++)
        printf("%d ", array[i]);
}

int main()
{
    int arr[1000], dimension, newArr[1000], newDimension;
    readArray(arr, &dimension);
    extractPrimeNumbers(arr, newArr, dimension, &newDimension);
    sortArray(newArr, newDimension);
    return 0;
}
