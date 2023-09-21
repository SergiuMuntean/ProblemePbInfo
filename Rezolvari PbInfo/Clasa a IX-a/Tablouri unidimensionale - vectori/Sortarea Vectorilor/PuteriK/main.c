#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size, int* value)
{
    fscanf(input, "%d%d", size, value);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

int checker(int number, int value)
{
    int check = 1;
    while(number>value && number%value==0)
        number/=value;
    if(number!=value)
        check = 0;
    return check;
}

void selectArray(int* array, int* newArray, int size, int* newSize, int value)
{
    int j = 0;
    for(int i=0; i<size; i++)
    {
        if(checker(array[i], value))
            newArray[j++] = array[i];
        if(array[i]==1)
            newArray[j++] = array[i];
    }
    *newSize = j;
}

void sortArray(FILE* output, int* newArray, int newSize)
{
    int s1 = newSize-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<newSize; j++)
        {
            if(newArray[i]>newArray[j])
            {
                int aux = newArray[i];
                newArray[i] = newArray[j];
                newArray[j] = aux;
            }
        }
    }
    for(int i=0; i<newSize; i++)
        fprintf(output, "%d ", newArray[i]);
}

int main()
{
    FILE *f, *g;
    int arr[100], newArr[100], dimension, newDimension, k;
    f = fopen("puterik.in", "r");
    readArray(f, arr, &dimension, &k);
    fclose(f);
    selectArray(arr, newArr, dimension, &newDimension, k);
    g = fopen("puterik.out", "w");
    sortArray(g, newArr, newDimension);
    fclose(g);
    return 0;
}
