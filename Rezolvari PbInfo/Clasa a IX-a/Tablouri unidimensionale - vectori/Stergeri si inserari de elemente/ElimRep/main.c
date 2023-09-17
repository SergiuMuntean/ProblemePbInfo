#include <stdio.h>
#include <stdlib.h>

void citireVector(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void stergereElem(int* array, int size)
{
    int aparitie[1000];
    for(int i=0; i<size; i++)
        aparitie[i]= 0;
    for(int i=0; i<size; i++)
    {
        for(int j=i; j>=0; j--)
        {
            if(array[i]==array[j])
                aparitie[i]++;
        }
    }
    for(int i=0; i<size; i++)
        if(aparitie[i]==1)
            printf("%d ", array[i]);
}

int main()
{
    int arr[1000], n;
    citireVector(arr, &n);
    stergereElem(arr, n);
    return 0;
}

