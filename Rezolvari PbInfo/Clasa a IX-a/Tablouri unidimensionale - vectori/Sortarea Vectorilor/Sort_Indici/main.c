#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void extractIndex(int* indexArray, int size)
{
    for(int i=0; i<size; i++)
        indexArray[i] = i+1;
}

void sortArray(int* array, int* indexArray, int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<size; j++)
        {
            if(array[i]>array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
                int aux2 = indexArray[i];
                indexArray[i] = indexArray[j];
                indexArray[j] = aux2;
            }
            else if(array[i]==array[j] && indexArray[i]>indexArray[j])
            {
                int aux = indexArray[i];
                indexArray[i] = indexArray[j];
                indexArray[j] = aux;
            }
        }
    }

    for(int i=0; i<size; i++)
        printf("%d %d ", array[i], indexArray[i]);
}

int main()
{
    int arr[100], dimension, indArr[100];
    readArray(arr, &dimension);
    extractIndex(indArr, dimension);
    sortArray(arr, indArr, dimension);
    return 0;
}
