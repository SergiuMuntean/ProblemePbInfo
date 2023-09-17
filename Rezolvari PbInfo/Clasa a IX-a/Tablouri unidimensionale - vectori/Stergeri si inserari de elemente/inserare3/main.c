#include <stdio.h>
#include <stdlib.h>

void citireVector(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int minimel(int* array, int size)
{
    int minim;
    minim = 2147483647;
    for(int i=0; i<size; i++)
    {
        if(array[i]<minim)
            minim = array[i];
    }
    return minim;
}

void duplicareElement(int* array, int size, int value)
{
    for(int i = 0; i<size; i++)
    {
        if(array[i]==value)
        {
            printf("%d %d ", array[i], array[i]);
        }
        else
            printf("%d ",array[i]);
    }

}

int main()
{
    int arr[1000], n, minimul;
    citireVector(arr, &n);
    minimul = minimel(arr, n);
    duplicareElement(arr, n, minimul);
    return 0;
}
