#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    int number;
    *size = 0;
    int i = 0;
    while(fscanf(input, "%d", &number)!=EOF)
    {
        (*size)++;
        array[i] = number;
        i++;
    }
}

int countDigits(int number)
{
    int counter = 0;
    while(number)
    {
        number/=10;
        counter++;
    }
    return counter;
}

int newVector(int* array, int size, int* newArray, int* newSize)
{
    int detect = 0;
    int j = 0;
    *newSize = 0;
    for(int i=0; i<size; i++)
    {
        if(countDigits(array[i])<=2)
        {
            (*newSize)++;
            detect = 1;
            newArray[j++] = array[i];
        }
}
    if(detect == 0)
        return 0;
    else
        return 1;
}

void sortArray(FILE* output, int* array, int size, int* newArray, int newSize, int detect)
{
    int j;
    for(int i=1; i<newSize; i++)
    {
        j = i;
        while(newArray[j]<newArray[j-1] && j>0)
        {
            int aux = newArray[j];
            newArray[j] = newArray[j-1];
            newArray[j-1] = aux;
            j--;
        }
    }
    if(detect==0)
        fprintf(output, "NU EXISTA");

    else for(int i=0; i<newSize; i++)
        fprintf(output, "%d ", newArray[i]);
}

int main()
{
    FILE *f, *g;
    int arr[100], newArr[100], dimension, newDimension;
    f = fopen("sort2.in", "r");
    readArray(f, arr, &dimension);
    fclose(f);
    int detect = newVector(arr, dimension, newArr, &newDimension);
    g = fopen("sort2.out", "w");
    sortArray(g, arr, dimension, newArr, newDimension, detect);
    return 0;
}
