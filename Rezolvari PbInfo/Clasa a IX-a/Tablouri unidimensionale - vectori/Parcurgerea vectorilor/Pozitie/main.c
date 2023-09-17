#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireVector(int* array, int* size)
{
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(f, "%d", array+i);
}

int calculPozitie(int* array, int size)
{
    int pozitie = 1;
    for(int i=1; i<size; i++)
        if(array[0]>array[i])
            pozitie++;
    return pozitie;
}

int main()
{
    int arr[10000], n;
    f = fopen("pozitie.in", "r");
    g = fopen("pozitie.out", "w");
    citireVector(arr, &n);
    fprintf(g, "%d", calculPozitie(arr, n));
    return 0;
}
