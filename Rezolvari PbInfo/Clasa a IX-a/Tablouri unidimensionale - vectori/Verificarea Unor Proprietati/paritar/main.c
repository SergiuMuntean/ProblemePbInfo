#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void readArray(int* array, int* size)
{
    fscanf(f, "%d", size);
    int dimensiune = *size;
    for(int i=0; i<2*dimensiune; i++)
        fscanf(f, "%d", array+i);
}

void checker(int* array, int size)
{
    int newArray[250000];
    int detect = 1;
    int detect2 = 1;
    int j = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=size; j<2*size; j++)
        {
            if(array[i]%2!=array[j]%2)
                detect = 0;
            if(array[i]%2!=array[j]%2 && array[i]>=array[j])
                detect2 = 0;
        }
        if(detect==1||detect2==1)
        {
            newArray[j] = 1;
            j++;
        }
        else if(detect==0 && detect2 == 0)
        {
            newArray[j] = 0;
            j++;
        }
    }
    int dimensiune = j;
    int determinant = 1;
    for(int k=0; k<dimensiune; k++)
        if(newArray[k]==0)
        {
            fprintf(g, "NU");
            determinant = 0;
            break;
        }
    if(determinant==1)
        fprintf(g, "DA");
}

int main()
{
    int arr[500000], n;
    f = fopen("paritar.in", "r");
    readArray(arr, &n);
    fclose(f);
    g = fopen("paritar.out", "w");
    checker(arr, n);
    fclose(g);
    return 0;
}
