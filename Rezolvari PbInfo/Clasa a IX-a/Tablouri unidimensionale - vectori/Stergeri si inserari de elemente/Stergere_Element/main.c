#include <stdio.h>
#include <stdlib.h>

void citireVector(int* array, int* size, int* indice)
{
    scanf("%d %d", size, indice);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void stergereElement(int* array, int size, int indice)
{
    for(int i=indice; i<size; i++)
    {
        array[i-1] = array[i];
    }
    size--;
    for(int i=0; i<size; i++)
        printf("%d ", *(array+i));
}

int main()
{
    int arr[1500], n, p;
    citireVector(arr, &n, &p);
    stergereElement(arr, n, p);
    return 0;
}
