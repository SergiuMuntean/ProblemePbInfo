#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int size)
{
    for(int i=0; i<size; i++)
        fscanf(input, "%d", array+i);
}

void sortArray(int* array2, int size2, int* array3, int* size3)
{
    *size3 = 0;
    for(int i=size2-1; i>=0; i--)
    {
        array3[*size3] = array2[i];
        *size3 = *size3 + 1;
    }
}

void evensInterclasare(FILE* output, int* array, int* array2, int* finalArray, int size1, int size2)
{
    int finalSize = 0;
    int x = 0;
    int y = 0;
    while(x<size1 && y<size2)
    {
        if(array[x]<array2[y])
        {
            if(array[x]%2==0)
                finalArray[finalSize++] = array[x];
            x++;
        }
        else if(array[x]>=array2[y])
        {
            if(array2[y]%2==0)
                finalArray[finalSize++] = array2[y];
            y++;
        }
    }
    if(x<size1)
    {
        for(int i=x; i<size1; i++)
        {
            if(array[i]%2==0)
                finalArray[finalSize++] = array[i];
        }
    }
    if(y<size2)
    {
        for(int i=y; i<size2; i++)
        {
            if(array2[i]%2==0)
                finalArray[finalSize++] = array2[i];
        }
    }

    for(int i=0; i<finalSize; i++)
    {
        fprintf(output, "%d ", finalArray[i]);
        if(i%20==19)
            fprintf(output, "\n");
    }
}

int main()
{
    FILE *f, *g;
    int arr[100000], arr2[100000], arr3[100000], finArr[200000];
    int el1, el2, el3;
    f = fopen("interclasare3.in", "r");
    fscanf(f, "%d", &el1);
    fscanf(f, "%d", &el2);
    readArray(f, arr, el1);
    readArray(f, arr2, el2);
    fclose(f);
    sortArray(arr2, el2, arr3, &el3);
    g = fopen("interclasare3.out", "w");
    evensInterclasare(g, arr, arr3, finArr, el1, el3);
    fclose(g);
    return 0;
}
