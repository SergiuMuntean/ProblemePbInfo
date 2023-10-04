#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void interclasare(FILE* output, int* array1, int* array2, int* array3, int size1, int size2, int size3)
{
    size3 = size1 + size2;
    int x = 0; //index for array1
    int y = 0; //index for array2
    int k = 0; //index for final array
    while(x<size1 && y<size2)
    {
        if(array1[x]<array2[y])
            array3[k++] = array1[x++];
        else
            array3[k++] = array2[y++];
    }

    if(x<size1)
    {
        for(int i=x; i<size1; i++)
            array3[k++] = array1[i];
    }
    if(y<size2)
    {
        for(int i=y; i<size2; i++)
            array3[k++] = array2[i];
    }

    for(int i=0; i<size3; i++)
    {
        fprintf(output, "%d ", array3[i]);
        if(i%10==9)
            fprintf(output, "\n");
    }
}

int main()
{
    FILE *f, *g;
    int arr1[100000], arr2[100000], arr3[200000], el1, el2, el3;
    f = fopen("interclasare.in", "r");
    readArray(f, arr1, &el1);
    readArray(f, arr2, &el2);
    fclose(f);
    g = fopen("interclasare.out", "w");
    interclasare(g, arr1, arr2, arr3, el1, el2, el3);
    fclose(g);
    return 0;
}
