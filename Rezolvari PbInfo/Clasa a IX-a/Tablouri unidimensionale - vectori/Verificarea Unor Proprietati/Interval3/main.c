#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void checker(int* array, int size)
{
    int minim = array[0];
    int maxim = array[size-1];
    if(minim>=maxim)
    {
        int aux = minim;
        minim = maxim;
        maxim = aux;;
    }
    int value = 1;
    for(int i = 1; i<size-1; i++)
        if(array[i]<minim || array[i]>maxim)
        {
            value = 0;
            break;
        }
    if(value==1)
        printf("DA");
    else
        printf("NU");
}

int main()
{
    int arr[1000], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
