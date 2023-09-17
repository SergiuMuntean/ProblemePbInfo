#include <stdio.h>
#include <stdlib.h>

void citireVector(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void stergereElementePare(int* array, int size)
{
    for(int i=0; i<size; i++)
        if(array[i]%2==1)
            printf("%d ", array[i]);
}

int main()
{
    int arr[1000], n;
    citireVector(arr, &n);
    stergereElementePare(arr, n);
    return 0;
}
