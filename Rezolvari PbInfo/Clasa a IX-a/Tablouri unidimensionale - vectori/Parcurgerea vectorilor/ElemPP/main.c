#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireVector(int* array, int* size)
{
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(f,"%d", array+i);
}

int primele2Cifre(int number)
{
    while(number>=100)
        number/=10;
    return number;
}

void printElementePP(int* array, int size)
{
    for(int i=0; i<size; i++)
    {
        int a = primele2Cifre(*(array+i));
        if(a==16 || a==25 || a==36 || a==49 || a==64 || a==81)
            fprintf(g, "%d ", *(array+i));
    }
}

int main()
{
    int arr[20], n;
    f = fopen("elempp.in", "r");
    g = fopen("elempp.out", "w");
    citireVector(arr, &n);
    printElementePP(arr, n);
    fclose(f);
    fclose(g);
    return 0;
}
