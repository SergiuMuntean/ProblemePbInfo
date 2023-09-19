#include <stdio.h>
#include <stdlib.h>

void readArrayAndSeparate(long long* array, int* size, long long* evenArray, int* evenSize, long long* oddArray, int* oddSize)
{
    int j = 0;
    int k = 0;
    scanf("%d", size);
    for(int i=0; i<*size; i++)
    {
        scanf("%lld", array+i);
        if(array[i]%2==0)
            evenArray[j++] = array[i];
        else
            oddArray[k++] = array[i];
    }
    *evenSize = j;
    *oddSize = k;
}

void sortArray(long long* evenArray, int evenSize, long long* oddArray, int oddSize)
{
    int s1 = evenSize-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<evenSize; j++)
        {
            if(evenArray[i]>evenArray[j])
            {
                long long aux = evenArray[i];
                evenArray[i] = evenArray[j];
                evenArray[j] = aux;
            }
        }
    }
    int s3 = oddSize-1;
    for(int i=0; i<s3; i++)
    {
        int s4 = i+1;
        for(int j=s4; j<oddSize; j++)
        {
            if(oddArray[i]>oddArray[j])
            {
                long long aux = oddArray[i];
                oddArray[i] = oddArray[j];
                oddArray[j] = aux;
            }
        }
    }

    for(int i=0; i<evenSize; i++)
        printf("%lld ", evenArray[i]);
    for(int i=0; i<oddSize; i++)
        printf("%lld ", oddArray[i]);
}

int main()
{
    long long arr[1001], evenArr[1001], oddArr[1001];
    int dimension, evenDimension, oddDimension;
    readArrayAndSeparate(arr, &dimension, evenArr, &evenDimension, oddArr, &oddDimension);
    sortArray(evenArr, evenDimension, oddArr, oddDimension);
    return 0;
}
