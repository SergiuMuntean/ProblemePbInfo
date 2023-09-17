#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size, int* increments)
{
    scanf("%d%d", size, increments);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void sortArray(int* array, int size, int increments)
{
    int sorted;
    int dimension = size;
    int medianIndex = (size-1)/2;
    do{
        sorted = 1;
        for(int i=0; i<size-1; i++)
            if(array[i]>array[i+1])
            {
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                sorted = 0;
            }
            size--;
    }while(!sorted);

    for(int i = 0 ; i<dimension; i++)
    {
        if(array[i] == array[medianIndex])
            array[i]++;
    }
    printf("%d ", array[medianIndex]);
}

int main()
{
    int arr[1000], n, value;
    readArray(arr, &n, &value);
    sortArray(arr, n, value);
    return 0;
}
