#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireVector(int *array, int *size)
{
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
    {
        fscanf(f, "%d", array+i);
    }
}

void maximSiAparitii(int *array, int *size, int* maxim, int* aparitii)
{
    *maxim = 0;
    *aparitii = 0;
    for(int i=0; i<*size; i++)
    {
        if(*(array+i)>*maxim)
            *maxim = array[i], *aparitii = 1;
        else if(array[i]== *maxim)
            (*aparitii)++;
    }
}


int main()
{
    int arr[1001], n, maximul, apar;
    f = fopen("maxim4.in", "r");
    g = fopen("maxim4.out", "w");
    citireVector(arr, &n);
    maximSiAparitii(arr, &n, &maximul, &apar);
    fprintf(g, "%d %d", maximul, apar);
    return 0;
}
