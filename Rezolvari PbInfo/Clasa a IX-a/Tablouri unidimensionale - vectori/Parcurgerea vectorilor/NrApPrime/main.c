#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

int numarPrim(int number)
{
    int contor = 0;
    for(int d=1; d*d<=number; d++)
    {
        if(number%d==0)
            contor+=2;
        if(d*d==number)
            contor--;
    }
    return contor;
}

void citireVector(int* array, int* size)
{
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
    {
        fscanf(f, "%d", array+i);
    }
}

int main()
{
    int arr[100], n, aparitii = 0;
    f = fopen("nrapprime.in", "r");
    g = fopen("nrapprime.out", "w");
    citireVector(arr, &n);
    for(int i=0; i<n; i++)
    {
        if(numarPrim(arr[i])==2)
            aparitii++;
    }
    fprintf(g, "%d", aparitii);

    fclose(f);
    fclose(g);
    return 0;
}
