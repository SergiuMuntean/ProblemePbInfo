#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int checker(int number)
{
    if(number%10 == 0)
        return 1;
    return 0;
}

int extractNumbers(int* array, int* newArray, int size, int* newSize, int* exist)
{
    *exist = 0;
    int j = 0;
    for(int i=0; i<size; i++)
    {
        if(checker(array[i])==1)
        {
            newArray[j++] = array[i];
            *exist = 1;
        }
    }
    *newSize = j;
}

void sortArray(int* array, int size, int exist)
{
    int sortat;
    int dimension = size;
    do{
        sortat = 1;
        for(int i=0; i<size-1; i++)
        {
            if(array[i] < array[i+1])
            {
                sortat = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
        size--;
    }while(!sortat);
    if(exist)
    {
        for(int i =0; i<dimension; i++)
            printf("%d ", array[i]);
    }
    else
        printf("NU EXISTA");
}

int main()
{
    int arr[1000], dimension, arr2[1000], newDimension, presence;
    readArray(arr, &dimension);
    extractNumbers(arr, arr2, dimension, &newDimension, &presence);
    sortArray(arr2, newDimension, presence);
    return 0;
}
