#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void detectMinMaxIndex(int* array, int size, int* minIndex, int* maxIndex)
{
    int minim = array[0];
    int maxim = array[0];
    for(int i=0; i<size; i++)
        if(array[i]<minim)
            minim = array[i], *minIndex = i;
    for(int i=0; i<size; i++)
        if(array[i]>maxim)
            maxim = array[i], *maxIndex = i;
}

void extractArray(int* array, int size, int* newArray, int* newSize, int minIndex, int maxIndex)
{
    int j=0;
    if(minIndex < maxIndex)
    {
        for(int i=0; i<size; i++)
            if(i>=minIndex && i<=maxIndex)
                newArray[j++] = array[i];
    }
    else
    {
        for(int i=0; i<size; i++)
            if(i>=maxIndex && i<=minIndex)
                newArray[j++] = array[i];
    }
    *newSize = j;
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
}

void resultArray(int* array, int size, int* newArray, int newSize, int minIndex, int maxIndex)
{
    int j = 0;
    if(minIndex < maxIndex)
        for(int i=minIndex; i<=maxIndex; i++)
            array[i] = newArray[j++];
    else
        for(int i=maxIndex; i<=minIndex; i++)
            array[i] = newArray[j++];
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
}

int main()
{
    int arr[1000], dimension, newArr[1000], newDimension, indexMic, indexMare;
    readArray(arr, &dimension);
    detectMinMaxIndex(arr, dimension, &indexMic, &indexMare);
    extractArray(arr, dimension, newArr, &newDimension, indexMic, indexMare);
    sortArray(newArr, newDimension);
    resultArray(arr, dimension, newArr, newDimension, indexMic, indexMare);
    return 0;
}
