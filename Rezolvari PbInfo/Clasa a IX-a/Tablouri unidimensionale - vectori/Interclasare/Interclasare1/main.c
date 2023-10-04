#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void interclasare(FILE* output, int* array1, int* array2, int* array3, int* array4, int s1, int s2, int s3, int newSize)
{
    s3 = s1 + s2;
    int x = 0;
    int y = 0;
    int k = 0;
    while(x<s1 && y<s2)
    {
        if(array1[x]<array2[y])
            array3[k++] = array1[x++];
        else
            array3[k++] = array2[y++];
    }

    if(x<s1)
    {
        for(int i=x; i<s1; i++)
            array3[k++] = array1[i];
    }
    if(y<s2)
    {
        for(int i=y; i<s2; i++)
            array3[k++] = array2[i];
    }

    array4[0] = array3[0];
    newSize = 1;
    for(int i=1; i<s3; i++)
    {
        if(array3[i]!=array3[i-1])
            array4[newSize++] = array3[i];
    }

    for(int i=0; i<newSize; i++)
    {
        fprintf(output, "%d ", array4[i]);
        if(i%10==9)
            fprintf(output, "\n");
    }
}

int main()
{
    FILE *f, *g;
    int arr[100000], arr2[100000], arr3[200000], arr4[200000];
    int el1, el2, el3, el4 = 0;
    f = fopen("interclasare1.in", "r");
    readArray(f, arr, &el1);
    readArray(f, arr2, &el2);
    fclose(f);
    g = fopen("interclasare1.out", "w");
    interclasare(g, arr, arr2, arr3, arr4, el1, el2, el3, el4);
    fclose(g);
    return 0;
}
