#include <stdio.h>
#include <stdlib.h>

void citireVector(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int minimVector(int* array, int size)
{
    int minim = 2147483647;
    for(int i=0; i<size; i++)
        if(array[i]<minim)
            minim = array[i];
    return minim;
}

void stergereElemente(int* array, int size)
{
    for(int i=0; i<size; i++)
        if(array[i]!=minimVector(array,size))
            printf("%d ", array[i]);
}

int main()
{
    int arr[1000], n;
    citireVector(arr, &n);
    stergereElemente(arr, n);
    return 0;
}
