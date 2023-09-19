#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size, int* midIndex)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
    *midIndex = (*size)/2;
}

void sortArray(FILE* output, int* array, int mid, int size)
{
    int s1 = mid - 1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<mid; j++)
        {
            if(array[i]>array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    int s3 = size-1;
    for(int i=mid; i<s3; i++)
    {
        int s4 = i+1;
        for(int j=s4; j<size; j++)
        {
            if(array[i]<array[j])
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
    int arr[100], dimension, half;
    f = fopen("halfsort.in", "r");
    readArray(f, arr, &dimension, &half);
    fclose(f);
    g = fopen("halfsort.out", "w");
    sortArray(g, arr, half, dimension);
    fclose(g);
    return 0;
}
