#include <stdio.h>

FILE *f, *g;

void citireVector(int *array, int *size)
{
    for(int i=1; i<=*size; i++)
    {
        fscanf(f,"%d", array+i);
    }
}

int calculIeftinireMaxima(int *array1, int *array2, int size)
{
    int maxim = 0, pozitie = 0;
    for(int i=1; i<=size; i++)
    {
        int calcul = (array1[i]- array2[i])*100/array1[i];
        if(calcul > maxim)
            maxim = calcul, pozitie = i;
    }
    return pozitie;
}

int main()
{
    int arr1[1001], arr2[1001], n;
    f = fopen("blackfriday.in", "r");
    g = fopen("blackfriday.out", "w");
    fscanf(f, "%d", &n);
    citireVector(arr1, &n);
    citireVector(arr2, &n);
    fprintf(g, "%d", calculIeftinireMaxima(arr1, arr2, n));
    return 0;
}
