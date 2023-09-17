#include <stdio.h>
#include <stdlib.h>

FILE  *f, *g;

void citireVector(int* array, int* size)
{
    for(int i=0; i<*size; i++)
    {
        fscanf(f,"%d", array+i);
    }
}

void interschimbare(int* array1, int* array3, int* size, int* value1, int* value3)
{
    int detect1 = 0, detect3 = 0;
    for(int i=0; i<*size; i++)
    {
        if(array1[i]%2==0)
        {
            detect1 = 1;
            break;

        }
    }
    for(int i=*size-1; i>=0; i--)
    {
        if(array3[i]%2==1)
        {
            detect3 = 1;
            break;
        }
    }
    if(detect1==1 && detect3==1)
    {
        for(int i=0; i<*size; i++)
        {
            if(array1[i]%2==0)
            {
                *value1 = array1[i];
                break;
            }
        }
        for(int i=*size-1; i>=0; i--)
        {
            if(array3[i]%2==1)
            {
                *value3 = array3[i];
                array3[i] = *value1;
                break;
            }
        }
        for(int i=0; i<*size; i++)
        {
            if(array1[i]%2==0)
            {
                array1[i] = *value3;
                break;
            }
        }
    }
}

void printArray(int* array, int size)
{
    for(int i=0; i<size ;i++)
        fprintf(g, "%d ", *(array+i));
}


int main()
{
    int arr1[101], arr2[101], arr3[101], n, valoare1 = 0, valoare3 = 0;
    f = fopen("zone.in", "r");
    g = fopen("zone.out", "w");
    fscanf(f, "%d", &n);
    citireVector(arr1, &n);
    citireVector(arr2, &n);
    citireVector(arr3, &n);
    interschimbare(arr1, arr3, &n, &valoare1, &valoare3);
    printArray(arr1, n);
    printArray(arr2, n);
    printArray(arr3, n);
    return 0;
}
