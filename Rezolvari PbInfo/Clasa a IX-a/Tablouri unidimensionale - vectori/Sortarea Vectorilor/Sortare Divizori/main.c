#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* fileName, int* array, int* size)
{
    fscanf(fileName, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(fileName, "%d", array+i);
}

int countDivisors(int number)
{
    int contor = 0;
    for(int d=1; d*d<=number; d++)
    {
        if(number%d==0)
            contor+=2;
        if(d*d==number)
            contor--;
    }
    return contor;
}

void sortArray(FILE* fileName, int* array, int* newArray, int size)
{
    for(int i=0; i<size; i++)
    {
        newArray[i] = countDivisors(array[i]);
    }
    int sorted;
    int dimension = size;
    do{
        sorted = 1;
        for(int i = 0; i<size-1; i++)
        {
            if(newArray[i] < newArray[i+1])
            {
                sorted = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                int aux2 = newArray[i];
                newArray[i] = newArray[i+1];
                newArray[i+1] = aux2;
            }
            else if(newArray[i] == newArray[i+1] && array[i] > array[i+1])
            {
                sorted = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                int aux2 = newArray[i];
                newArray[i] = newArray[i+1];
                newArray[i+1] = aux2;
            }
        }
        size--;
    }while(!sorted);
    for(int i=0; i<dimension; i++)
    {
        fprintf(fileName,"%d ", array[i]);
    }
}

int main()
{
    FILE *f, *g;
    int arr[1000], n, newArr[1000];
    f = fopen("sortare_divizori.in", "r");
    readArray(f, arr, &n);
    fclose(f);
    g = fopen("sortare_divizori.out", "w");
    sortArray(g, arr, newArr, n);
    fclose(g);
    return 0;
}
