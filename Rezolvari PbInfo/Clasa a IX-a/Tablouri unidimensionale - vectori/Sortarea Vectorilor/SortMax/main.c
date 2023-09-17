#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void findMaxIndex(int* array, int size, int* index)
{
    *index = 0;
    int maxim = array[0];
    for(int i=0; i<size; i++)
    {
        if(array[i]>maxim)
            *index = i, maxim = array[i];
    }
}

void sortArray(int* array, int size, int index)
{
    int dimension = size;
    int newIndex = index;
    int sorted;

    do{
        sorted = 1;
        for(int i = 0; i< index-1; i++)
        {
            if(array[i]>array[i+1])
            {
                sorted = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
        index--;
    }while(!sorted);

    do{
        sorted = 1;
        for(int i=newIndex; i< size-1; i++)
        {
            if(array[i]<array[i+1])
            {
                sorted = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
        size--;
    }while(!sorted);

    for(int i=0; i<dimension; i++)
        printf("%d ", array[i]);
}

int main()
{
    int arr[1000], n, indice;
    readArray(arr, &n);
    findMaxIndex(arr, n, &indice);
    sortArray(arr, n, indice);
    return 0;
}
