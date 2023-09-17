#include <stdio.h>
#include <stdlib.h>

int nrPrim(int number)
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

void citireVector(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void stergereElementePrime(int* array, int size)
{
    for(int i=0; i<size; i++)
    {
        if(nrPrim(array[i])!=2)
            printf("%d ", array[i]);
    }
}

int main()
{
    int arr[1000], n;
    citireVector(arr, &n);
    stergereElementePrime(arr, n);
    return 0;
}
