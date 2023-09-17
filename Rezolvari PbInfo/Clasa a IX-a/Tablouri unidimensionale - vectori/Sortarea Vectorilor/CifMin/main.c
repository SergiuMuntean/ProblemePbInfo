#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int extractMinDigit(int number)
{
    int minim = number%10;
    while(number>9)
    {
        number/=10;
        if(number%10<minim)
            minim = number%10;
    }
    return minim;
}

void generateArray(int* array, int size, int* newArray)
{
    for(int i=0; i<size; i++)
        newArray[i] = extractMinDigit(array[i]);
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
    if(array[0] == 0)
    {
        for(int i=0; i<size; i++)
        {
            if(array[i]!=0)
            {
                int aux = array[i];
                array[i] = array[0];
                array[0] = aux;
                break;
            }
        }
    }
    for(int i=0; i<size; i++)
        printf("%d", array[i]);
}

int main()
{
    int arr[1000], newArr[1000], dimension;
    readArray(arr, &dimension);
    generateArray(arr, dimension, newArr);
    sortArray(newArr, dimension);
    return 0;
}
