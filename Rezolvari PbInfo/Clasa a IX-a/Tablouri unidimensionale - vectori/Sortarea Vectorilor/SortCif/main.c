#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

int sumCif(int number)
{
    int sum = 0;
    while(number)
    {
        sum += number%10;
        number /=10;
    }
    return sum;
}

void sortArray(FILE* output, int* array, int size)
{
    int j;
    for(int i=1; i<size; i++)
    {
        j = i;
        while(sumCif(array[j])<sumCif(array[j-1]) && j>0)
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
    f = fopen("sortcif.in", "r");
    readArray(f, arr, &n);
    fclose(f);
    g = fopen("sortcif.out", "w");
    sortArray(g, arr, n);
    return 0;
}
