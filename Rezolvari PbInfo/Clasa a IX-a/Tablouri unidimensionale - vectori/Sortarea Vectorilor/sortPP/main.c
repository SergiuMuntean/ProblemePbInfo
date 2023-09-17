#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int perfectSquare(int number)
{
    if(sqrt(number) == (int) sqrt(number))
       return 1;
    else
        return 0;
}

void sortArray(int* array, int size)
{
    int s1= size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<size; j++)
        {
            if(perfectSquare(array[i])==1 && perfectSquare(array[j])==1 && array[i]> array[j])
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
    int arr[1000], dimension;
    readArray(arr, &dimension);
    sortArray(arr, dimension);
    return 0;
}
