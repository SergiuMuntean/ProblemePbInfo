#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* index, int* size)
{
    scanf("%d %d", size, index);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void sortArray(int* array, int index, int size)
{
    int dimension = size;
    int finalDimension = dimension;
    int sortat;
    do{
        sortat = 1;
        for(int i=0; i<index-1; i++)
        {
            if(array[i]>array[i+1])
            {
                sortat = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
        size--;
    }while(!sortat);
    do{
        sortat = 1;
        for(int i=index; i<dimension-1; i++)
        {
            if(array[i]<array[i+1])
            {
                sortat = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
        dimension--;
    }while(!sortat);

    for(int i=0; i<finalDimension; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int arr[1000], i, n;
    readArray(arr, &n, &i);
    sortArray(arr, n, i);
    return 0;
}
