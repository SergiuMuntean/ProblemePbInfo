#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void sortArray(FILE* output, int* array, int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<size; j++)
        {
            if(array[i]>=0 && array[j]>=0 && array[i]<array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
            else if(array[i]<0 && array[j]<0 && array[i]>array[j])
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
    FILE *f, *g;
    int arr[1000], dimension;
    f = fopen("halfsort4.in", "r");
    readArray(f, arr, &dimension);
    fclose(f);
    g = fopen("halfsort4.out", "w");
    sortArray(g, arr, dimension);
    fclose(g);
    return 0;
}
