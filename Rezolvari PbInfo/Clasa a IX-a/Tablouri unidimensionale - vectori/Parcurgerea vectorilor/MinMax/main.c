#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void readArray(int *array, int *size)
{
    fscanf(f,"%d",size);
    for(int i=0; i<*size; i++)
       fscanf(f,"%d",array+i);
}

void determinareMinim(int *array, int size)
{
    int minim = 2000000000;
    for(int i=0; i<size; i++)
        if(*(array+i)<minim)
            minim = *(array+i);
    fprintf(g,"%d ",minim);
}

void determinareMaxim(int *array, int size)
{
    int maxim = -2000000000;
    for(int i=0; i<size; i++)
        if(*(array+i)>maxim)
            maxim = *(array+i);
    fprintf(g,"%d",maxim);
}

int main()
{
    int arr[1001], n;
    f = fopen("minmax.in", "r");
    g = fopen("minmax.out", "w");
    readArray(arr, &n);
    determinareMinim(arr, n);
    determinareMaxim(arr, n);
    fclose(f);
    fclose(g);
    return 0;
}
