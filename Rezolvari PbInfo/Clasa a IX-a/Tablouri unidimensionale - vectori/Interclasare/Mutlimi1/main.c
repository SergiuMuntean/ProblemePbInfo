#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void reunion(int* array, int* array2, int* unArray, int* reunArray, int size, int size2)
{
    int unionSize = 0;
    int x = 0;
    int y = 0;
    while(x<size && y<size2)
    {
        if(array[x]<array2[y])
            unArray[unionSize++] = array[x++];
        else
            unArray[unionSize++] = array2[y++];
    }

    if(x<size)
    {
        for(int i=x; i<size; i++)
            unArray[unionSize++] = array[i];
    }
    if(y<size2)
    {
        for(int i=y; i<size2; i++)
            unArray[unionSize++] = array2[i];
    }

    reunArray[0] = unArray[0];
    int reSize = 1;
    for(int i=1; i<unionSize; i++)
        if(unArray[i]!=unArray[i-1])
            reunArray[reSize++] = unArray[i];
    for(int i=0; i<reSize; i++)
        printf("%d ", reunArray[i]);
}

void intersection(int* array, int* array2, int* inArray, int size, int size2)
{
    int finalSize = 0;
    int x = 0;
    int y = 0;
    while(x<size && y<size2)
    {
        if(array[x]>array2[y])
            y++;
        if(array[x]<array2[y])
            x++;
        if(array[x]==array2[y])
        {
            inArray[finalSize++]=array[x++];
            y++;
        }
    }
    for(int i=0; i<finalSize; i++)
        printf("%d ", inArray[i]);
}

int main()
{
    int arr[100000], arr2[100000], unArr[200000], reunArr[200000], inArr[100000];
    int el1, el2;
    readArray(arr, &el1);
    readArray(arr2, &el2);
    reunion(arr, arr2, unArr, reunArr, el1, el2);
    printf("\n");
    intersection(arr, arr2, inArr, el1, el2);
    return 0;
}
