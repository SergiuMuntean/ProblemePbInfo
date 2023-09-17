#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int size)
{
    for(int i=0; i<size; i++)
        scanf("%d", array+i);
}

void sortIncArray(int* array, int size)
{
    int sortat;
    do
    {
        sortat = 1;
        for(int i=0; i<size-1; i++)
        {
            if(array[i]>array[i+1])
            {
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                sortat = 0;
            }
        }
    } while(!sortat);
}

void sortDecArray(int* array, int size)
{
    int sortat;
    do
    {
        sortat = 1;
        for(int i=0; i<size-1; i++)
        {
            if(array[i]<array[i+1])
            {
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                sortat = 0;
            }
        }
    } while(!sortat);
}

void checker(int* array1, int* array2, int size)
{
    int check = 1;
    float value = array1[0]/(1/(float) array2[0]);
    for(int i = 1, j = 1; i<size, j<size; i++, j++)
    {
        if(array1[i]/(1/(float) array2[j])!=value)
        {
            check = 0;
            break;
        }
    }
    if(check==1)
        printf("DA");
    else
        printf("NU");
}

int main()
{
    int arr1[100], arr2[100], dimensiune;
    scanf("%d", &dimensiune);
    readArray(arr1, dimensiune);
    sortIncArray(arr1, dimensiune);
    readArray(arr2, dimensiune);
    sortDecArray(arr2, dimensiune);
    checker(arr1, arr2, dimensiune);
    return 0;
}
