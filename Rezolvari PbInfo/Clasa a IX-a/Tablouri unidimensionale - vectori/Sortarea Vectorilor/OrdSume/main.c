#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void sumArray(int* array, int* newArray, int size, int* newSize)
{
    int k=0;
    for(int i=0; i<size; i++)
    {
        int start = i+1;
        for(int j=start; j<size; j++)
            if(array[i]!=array[j])
                newArray[k++] = array[i] + array[j];
    }
    *newSize = k;
}

void sortArray(FILE* output, int* array, int size)
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
            }
        }
    }
    fprintf(output, "%d ", array[0]);
    for(int i=1; i<size; i++)
        if(array[i-1]!=array[i])
            fprintf(output, "%d ", array[i]);
}

int main()
{
    FILE *f, *g;
    int arr[100], newArr[9000], dimension, newDimension;
    f = fopen("ordsume.in", "r");
    readArray(f, arr, &dimension);
    fclose(f);
    sumArray(arr, newArr, dimension, &newDimension);
    g = fopen("ordsume.out", "w");
    sortArray(g, newArr, newDimension);
    fclose(g);
    return 0;
}
