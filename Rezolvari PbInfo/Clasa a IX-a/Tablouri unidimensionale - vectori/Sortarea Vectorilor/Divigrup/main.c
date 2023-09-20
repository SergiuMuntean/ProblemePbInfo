//90 de puncte, problema are limita de timp depasita
//metoda de sortare nu este cea mai eficienta, dar
//totusi, am decis sa o public, rezolva corect cerinta
#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

int countDivisors(int number)
{
    int count = 0;
    for(int d=1; d*d<=number; d++)
    {
        if(number%d==0)
            count+=2;
        if(d*d==number)
            count--;
    }
    return count;
}

void extractDivNumber(int* array, int* newArray, int size)
{
    for(int i=0; i<size; i++)
        newArray[i] = countDivisors(array[i]);
}

void sortArrays(int* array, int *newArray, int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<size; j++)
        {
            if(newArray[i]<newArray[j])
            {
                int aux = newArray[i];
                newArray[i] = newArray[j];
                newArray[j] = aux;
                int aux2 = array[i];
                array[i] = array[j];
                array[j] = aux2;
            }
        }
    }
}

void countForGroups(int* newArray, int size, int* groupsArray, int* grArrayDim)
{
    int j = 0;
    groupsArray[0] = 0;
    for(int i=1; i<size+1; i++)
    {
        groupsArray[j] = groupsArray[j] + 1;
        if(newArray[i]<newArray[i-1])
            groupsArray[++j] = 0;
    }
    *grArrayDim = j;
}

void sortGroups(int* array, int* newArray, int* groupsArray, int sizeI, int sizeF, int grSize)
{
    int s1 = sizeF-1;
    for(int i=sizeI; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<sizeF; j++)
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

void printGroups(FILE* output, int* array, int* groupsArray, int size, int grArrayDim)
{
    fprintf(output, "%d" , grArrayDim);
    fprintf(output, "\n");
    int k=0;
    for(int i=0; i<grArrayDim; i++)
    {
        fprintf(output, "%d ", groupsArray[i]);
        for(int j=0; j<groupsArray[i]; j++)
        {
            fprintf(output, "%d ", array[k]);
            k++;
        }
        fprintf(output, "\n");
    }
}

int main()
{
    FILE *f, *g;
    int arr[200], divArr[200], grArr[200], dimension, grDimension;
    f = fopen("divigrup.in", "r");
    readArray(f, arr, &dimension);
    fclose(f);
    extractDivNumber(arr, divArr, dimension);
    sortArrays(arr, divArr, dimension);
    countForGroups(divArr, dimension, grArr, &grDimension);
    int startSize;
    int sizeX;
    for(int i=0; i<grDimension; i++)
    {
        if(i==0)
        {
            startSize = 0;
            sizeX = grArr[i];
        }
        else
        {
            startSize = sizeX;
            sizeX += grArr[i];
        }

        sortGroups(arr, divArr, grArr, startSize, sizeX, grDimension);
    }
    g = fopen("divigrup.out", "w");
    printGroups(g, arr, grArr, dimension, grDimension);
    fclose(g);
    return 0;
}
