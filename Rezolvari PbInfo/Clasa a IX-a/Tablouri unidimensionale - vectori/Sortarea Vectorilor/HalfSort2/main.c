#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d" , size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void sortArray(FILE* output, int* array, int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i=i+2)
    {
        int s2 = i+2;
        for(int j=s2; j<size; j=j+2)
        {
            if(array[i]<array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    int s3 = size-1;
    for(int i=1; i<s3; i=i+2)
    {
        int s4 = i+2;
        for(int j=s4; j<size; j=j+2)
        {
            if(array[i]>array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }

    for(int i=0; i<size; i++)
        fprintf(output, "%d ", array[i]);
}

int main()
{
    FILE* f, *g;
    int arr[100], dimension;
    f = fopen("halfsort2.in", "r");
    readArray(f, arr, &dimension);
    fclose(f);
    g = fopen("halfsort2.out", "w");
    sortArray(g, arr, dimension);
    fclose(g);
    return 0;
}
