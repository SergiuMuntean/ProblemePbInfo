#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int extractFirstDigit(int number)
{
    while(number>9)
        number/=10;
    return number;
}

void generateArray(int* array, int size, int* newArray)
{
    for(int i=0; i<size; i++)
        newArray[i] = extractFirstDigit(array[i]);
}

void sortArray(int* array, int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<size; j++)
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
        printf("%d", array[i]);
}

int main()
{
    int arr[1000], dimension, newArr[1000];
    readArray(arr, &dimension);
    generateArray(arr, dimension, newArr);
    sortArray(newArr, dimension);
    return 0;
}
