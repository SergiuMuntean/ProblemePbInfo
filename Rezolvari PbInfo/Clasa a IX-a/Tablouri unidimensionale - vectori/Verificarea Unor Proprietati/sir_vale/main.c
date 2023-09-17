#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int determinareMinim(int* array, int size)
{
    int index = 0;
    int minim = array[0];
    for(int i=1; i<size; i++)
        if(array[i]< minim)
            minim = array[i], index = i;
    return index;
}

const char* checker(int* array, int size)
{
    int index = determinareMinim(array, size);
    if(index == 0 || index == size-1)
        return "NU";
    for(int i=0; i<index; i++)
        if(array[i] <= array[i+1])
            return "NU";
    for(int i=index; i<size-1; i++)
        if(array[i] >= array[i+1])
            return "NU";
    return "DA";
}

int main()
{
    int arr[1000], n;
    readArray(arr, &n);
    printf("%s", checker(arr, n));
    return 0;
}
