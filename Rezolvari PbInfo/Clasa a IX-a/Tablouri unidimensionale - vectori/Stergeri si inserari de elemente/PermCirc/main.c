#include <stdio.h>

void citireVector(short* array, short* array_vechi, short* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
    {
        scanf("%d", array+i);
        printf("%d ", array[i]);
        array_vechi[i] = array[i];
    }
}

int transformareVector(short* array, short* array_vechi, short size)
{
    int aux = array[0];
    for(int i=0; i<size-1; i++)
    {
        array[i] = array[i+1];
        if(array[i]==array_vechi[i])
            return 0;
    }
    array[size-1] = aux;
    printf("\n");
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
    return 1;
}

int main()
{
    short arr[16], arr_vechi[16], n;
    citireVector(arr, arr_vechi, &n);
    while(transformareVector(arr, arr_vechi, n)==1)
        transformareVector(arr,arr_vechi, n);
    return 0;
}
