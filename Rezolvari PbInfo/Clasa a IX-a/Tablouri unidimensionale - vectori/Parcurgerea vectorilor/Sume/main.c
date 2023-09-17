#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireVector(int* array, int* size)
{
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(f, "%d", array+i);
}

void stocareSumePartiale(int* array, int size)
{
    int sum = 0;
    do
    {
        sum = 0;
        for(int i=0; i<size; i++)
            sum += *(array+i);
        fprintf(g, "%d\n", sum);
        size--;

    }while(size);
}

int main()
{
    int arr[100], n;
    f = fopen("sume.in", "r");
    g = fopen("sume.out", "w");
    citireVector(arr, &n);
    stocareSumePartiale(arr, n);
    fclose(f);
    fclose(g);
    return 0;
}
