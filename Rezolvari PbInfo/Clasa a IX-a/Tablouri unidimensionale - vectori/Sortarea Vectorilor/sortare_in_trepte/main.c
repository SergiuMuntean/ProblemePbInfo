#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void extractNegatives(int* array, int* negArray, int size, int* negSize)
{
    int j = 0;
    for(int i=0; i<size; i++)
        if(array[i]<0)
            negArray[j++] = array[i];
    *negSize = j;
}

void extractPozitives(int* array, int* pozArray, int size, int* pozSize)
{
    int j = 0;
    for(int i=0; i<size; i++)
        if(array[i]>0)
            pozArray[j++] = array[i];
    *pozSize = j;
}

void extractZeros(int* array, int* zeroArray, int size, int* zeroSize)
{
    int j = 0;
    for(int i=0; i<size; i++)
        if(array[i]==0)
            zeroArray[j++] = array[i];
    *zeroSize = j;
}

void sortArray(int* negA, int* zeroA, int* pozA, int negSize, int zeroSize, int pozSize)
{
    int s1 = negSize-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<negSize; j++)
            if(negA[i]<negA[j])
            {
                int aux = negA[i];
                negA[i] = negA[j];
                negA[j] = aux;
            }
    }

    int s3 = pozSize-1;
    for(int i=0; i<s3; i++)
    {
        int s4 = i+1;
        for(int j=s4; j<pozSize; j++)
            if(pozA[i]<pozA[j])
            {
                int aux = pozA[i];
                pozA[i] = pozA[j];
                pozA[j] = aux;
            }
    }

    for(int i=0; i<negSize; i++)
        printf("%d ", negA[i]);
    for(int i=0; i<zeroSize; i++)
        printf("%d ", zeroA[i]);
    for(int i=0; i<pozSize; i++)
        printf("%d ", pozA[i]);
}

int main()
{
    int arr[1000], posArr[1000], negArr[1000], zeroArr[1000];
    int dimension, posDimension, negDimension, zeroDimension;
    readArray(arr, &dimension);
    extractNegatives(arr, negArr, dimension, &negDimension);
    extractPozitives(arr, posArr, dimension, &posDimension);
    extractZeros(arr, zeroArr, dimension, &zeroDimension);
    sortArray(negArr, zeroArr, posArr, negDimension, zeroDimension, posDimension);
    return 0;
}
