#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireVector(int* array, int* size, int* value)
{
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
    {
        fscanf(f, "%d", array+i);
        *value = *(array+i);
    }
}

int aparitiile(int* array, int size, int value)
{
    int aparitii = 1;
    for(int i=0; i<size-1; i++)
    {
        if(array[i]==value)
            aparitii++;
    }
    return aparitii;
}

int main()
{
    int arr[100], n, valoare;
    f = fopen("nraparitii.in", "r");
    g = fopen("nraparitii.out", "w");
    citireVector(arr, &n, &valoare);
    fprintf(g,"%d", aparitiile(arr, n, valoare));
    fclose(f);
    fclose(g);
    return 0;
}
