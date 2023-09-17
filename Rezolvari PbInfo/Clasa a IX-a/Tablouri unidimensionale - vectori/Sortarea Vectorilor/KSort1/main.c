#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size, int* number)
{
    scanf("%d%d", size, number);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void sortArray(int* array, int size, int number)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+number;
        for(int j = s2; j<size; j+=number)
        {
            if(array[i]>array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
}

int main()
{
    int arr[1000], dimension, index;
    readArray(arr, &dimension, &index);
    sortArray(arr, dimension, index);
    return 0;
}
