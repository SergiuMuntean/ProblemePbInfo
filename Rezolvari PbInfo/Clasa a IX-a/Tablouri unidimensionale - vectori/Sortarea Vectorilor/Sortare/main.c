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
    for(int i=1; i<size; i++)
    {
        int j = i;
        while(array[j]>array[j-1] && j>0)
        {
            int aux = array[j];
            array[j] = array[j-1];
            array[j-1] = aux;
            j--;
        }
    }
    for(int i=0; i<size; i++)
        fprintf(output, "%d ", array[i]);
}

int main()
{
    FILE *f, *g;
    int arr[100], n;
    f = fopen("sortare.in", "r");
    readArray(f, arr, &n);
    fclose(f);
    g = fopen("sortare.out", "w");
    sortArray(g, arr, n);
    fclose(g);
    return 0;
}
