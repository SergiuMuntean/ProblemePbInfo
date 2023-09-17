#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void sortArrayNumbers(int* array, int* newArray, int size)
{
    int sortat;
    for(int i = 0 ; i<size; i++)
    {
        newArray[i] = i;
    }
    int dimension = size;
    do{
        sortat = 1;
        for(int i=0; i<size-1; i++)
        {
            if(array[i]>array[i+1])
            {
                sortat = 0;
                int aux = newArray[i];
                newArray[i] = newArray[i+1];
                newArray[i+1] = aux;
                int aux2 = array[i];
                array[i] = array[i+1];
                array[i+1] = aux2;
            }
        }
        size--;
    }while(!sortat);
    for(int i=0; i<dimension; i++)
        printf("%d ", newArray[i]+1);
}

int main()
{
    int arr[1000], n, newArr[1000];
    readArray(arr, &n);
    sortArrayNumbers(arr, newArr, n);
    return 0;
}
