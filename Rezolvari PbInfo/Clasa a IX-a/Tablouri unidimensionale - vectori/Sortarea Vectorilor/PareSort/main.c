#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

int extractEven(int* array, int size, int* newArray, int* newSize)
{
    int detect = 0;
    int j = 0;
    for(int i=0; i<size; i++)
        if(array[i]%2==0)
            newArray[j++] = array[i], detect = 1;
    *newSize = j;
    if(detect == 0)
        return 0;
    else
        return 1;
}

void sortArray(FILE* output, int* array, int size, int detect)
{
    int j;
    for(int i=1; i<size; i++)
    {
        j = i;
        while(array[j]<array[j-1] && j>0)
        {
            int aux = array[j];
            array[j] = array[j-1];
            array[j-1] = aux;
            j--;
        }
    }
    if(detect==0)
        fprintf(output, "nu exista");
    else
    {
        fprintf(output,"%d\n", size);
        for(int i=0; i<size; i++)
        {
            fprintf(output, "%d ", array[i]);
        }
    }
}

int main()
{
    int arr[1000], dimension, newArr[1000], newDimension;
    FILE *f, *g;
    f = fopen("paresort.in", "r");
    readArray(f, arr, &dimension);
    fclose(f);
    int detector = extractEven(arr, dimension, newArr, &newDimension);
    g = fopen("paresort.out", "w");
    sortArray(g, newArr, newDimension, detector);
    fclose(g);
    return 0;
}
