#include <stdio.h>
#include <stdlib.h>

void readArray(char* array, int* size)
{
    scanf("%d", size);
    *size = 2*(*size);
    for(int i=0; i<*size; i++)
        scanf("%c", array+i);
}

void numeric(char* array, int size, int* numArray)
{
    int p = 0;
    for(int i=1; i<size; i=i+2)
    {
        numArray[p++] = (int)array[i];
        int k = numArray[p];
    }

    for(int i=0; i<p; i++)
    {
        int j = numArray[i];
        if(j==97 || j==101 || j==105 || j==111 || j==117)
            printf("%c ", (char)numArray[i]);
    }

    for(int i=0; i<p; i++)
    {
        int j = numArray[i];
        if(j!=97 && j!=101 && j!=105 && j!=111 && j!=117)
            printf("%c ", (char)numArray[i]);
    }
}


int main()
{
    int dimension;
    char arr[4001];
    int numArr[4001];
    readArray(arr, &dimension);
    numeric(arr, dimension, numArr);
    return 0;
}
