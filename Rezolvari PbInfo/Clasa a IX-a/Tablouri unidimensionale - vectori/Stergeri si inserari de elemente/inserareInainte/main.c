#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void inserareInainte(int* array, int size)
{
    for(int i=0; i<size; i++)
    {
        if(sqrt(array[i]) ==(int) sqrt(array[i]))
            printf("%d %d ", (int) sqrt(array[i]), array[i]);
        else
            printf("%d ", array[i]);
    }
}

int main()
{
    int arr[25], n;
    readArray(arr, &n);
    inserareInainte(arr, n);
    return 0;
}
