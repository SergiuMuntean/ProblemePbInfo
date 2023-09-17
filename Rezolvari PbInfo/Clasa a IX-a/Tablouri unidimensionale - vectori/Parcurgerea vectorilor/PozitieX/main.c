#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireVector(int* array, int *size)
{
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
    {
        fscanf(f, "%d", array+i);
    }
}

void sortarePrinSelectie(int* array, int size)
{
    for(int i=0; i<size-1; i++)
    {
        int iMinim = i;
        for(int j=i+1; j<size; j++)
        {
            if(array[j] < array[iMinim])
            {
                iMinim = j;
            }
        }
        if(iMinim != i)
        {
            int aux = array[i];
            array[i] = array[iMinim];
            array[iMinim] = aux;
        }
    }
}

void printareResult(int* array, int size, int value)
{
    int detect = 0;
    for(int i=0; i<size; i++)
    {
        if(*(array+i)==value)
        {
            fprintf(g, "%d ", i+1);
            detect=1;
            break;
        }
    }
    if(detect==0)
        fprintf(g, "NU EXISTA");
}

int main()
{
    int arr[10000], n, valoare;
    f = fopen("pozitiex.in", "r");
    g = fopen("pozitiex.out", "w");
    fscanf(f, "%d", &valoare);
    citireVector(arr, &n);
    sortarePrinSelectie(arr, n);
    printareResult(arr, n, valoare);
    fclose(f);
    fclose(g);

    return 0;
}
