#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int sumDiv(int number)
{
    int sum = 0;
    for(int d=1; d*d<=number; d++)
    {
        if(number%d==0)
            sum+=d+number/d;
        if(d*d==number)
            sum-=d;
    }
    return sum;
}

void sortArray(int* array, int size)
{
    int dime = size;
    int sortat;
    do{
        sortat = 1;
        for(int i=0; i<size-1; i++)
        {
            int value1 = sumDiv(array[i]);
            int value2 = sumDiv(array[i+1]);
            if(value1>value2 || (value1==value2 && array[i] > array[i+1]))
            {
                sortat = 0;
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
        size--;
    }while(!sortat);
    for(int i=0; i<dime; i++)
        printf("%d ", array[i]);
}

int main()
{
    int arr[1000], dimension;
    readArray(arr, &dimension);
    sortArray(arr, dimension);
    return 0;
}
