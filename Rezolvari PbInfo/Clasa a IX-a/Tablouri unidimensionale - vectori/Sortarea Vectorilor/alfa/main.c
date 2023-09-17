#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size, int* value)
{
    fscanf(input, "%d%d", size, value);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void sortArray(FILE* output, int* array, int size, int value)
{
    int j;
    for(int i=1; i<size; i++)
    {
        j = i;
        while(j>0 && array[j]<array[j-1])
        {
            if(array[j]==value || array[j-1] == value)
                break;
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
    int arr[1000], n, val;
    FILE *f, *g;
    f = fopen("alfa.in", "r");
    readArray(f, arr, &n, &val);
    fclose(f);
    g = fopen("alfa.out", "w");
    sortArray(g, arr, n, val);
    fclose(g);
    return 0;
}
