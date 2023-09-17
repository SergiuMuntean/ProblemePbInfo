#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

int primaCifra(int number)
{
    int x;
    while(number>9)
    {
        number/=10;
        x = number;
    }
    return x;
}

void sortArray(FILE* output, int* array, int size)
{
    int j;
    for(int i=1; i<size; i++)
    {
        j = i;
        while(primaCifra(array[j])<primaCifra(array[j-1]) && j>0)
        {
            int aux = array[j];
            array[j] = array[j-1];
            array[j-1] = aux;
            j--;
        }
    }
    for(int i=0; i<size; i++)
        fprintf(output, "%d ", array[i]);
}

int main()
{
    int arr[100], n;
    FILE *f, *g;
    f = fopen("sortcif2.in", "r");
    readArray(f, arr, &n);
    fclose(f);
    g = fopen("sortcif2.out", "w");
    sortArray(g, arr, n);
    fclose(g);
    return 0;
}
