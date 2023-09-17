#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int size)
{
    for(int i=0; i<size; i++)
        scanf("%d", array+i);
}

void sortArray(int* array, int size)
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

void checker(int* array1, int* array2, int size)
{
    int check = 1;
    float value = (float) (array1[0]) / array2[0];
    for(int i = 1, j = 1; i<size, j<size; i++, j++)
    {
        if((float)(array1[i])/array2[j]!=value)
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
    sortArray(arr1, dimensiune);
    readArray(arr2, dimensiune);
    sortArray(arr2, dimensiune);
    checker(arr1, arr2, dimensiune);
    return 0;
}
