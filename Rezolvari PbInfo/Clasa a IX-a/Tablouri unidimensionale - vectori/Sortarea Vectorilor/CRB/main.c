#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void copyPositions(int* array, int* newArray, int size)
{
    for(int i=0; i<size; i++)
        newArray[i] = i;
}

void sortArray(FILE* output, int* array, int* newArray, int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<size; j++)
        {
            if(array[i]<array[j])
            {
                int aux = newArray[i];
                newArray[i] = newArray[j];
                newArray[j] = aux;
                int aux2 = array[i];
                array[i] = array[j];
                array[j] = aux2;
            }
        }
    }
    int contor = 0;
    for(int i=0; i<size; i++)
    {
        if(newArray[i]==i)
            contor++;
    }
    fprintf(output, "%d", contor);
}

int main()
{
    FILE *f, *g;
    int arr[1000], newArr[1000], dimension;
    f = fopen("crb.in", "r");
    readArray(f, arr, &dimension);
    fclose(f);
    copyPositions(arr, newArr, dimension);
    g = fopen("crb.out", "w");
    sortArray(g, arr, newArr, dimension);
    fclose(g);
    return 0;
}
