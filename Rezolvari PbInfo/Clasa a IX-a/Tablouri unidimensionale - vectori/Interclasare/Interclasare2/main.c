#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void commonsInterclasare(FILE* output, int* array, int* array2, int* finalArray, int size1, int size2)
{
    int finalSize = 0;
    int x = 0;
    int y = 0;
    while(x<size1 && y<size2)
    {
        if(array[x]<array2[y])
            x++;
        else if(array[x]>array2[y])
            y++;
        else if(array[x]==array2[y])
        {
            finalArray[finalSize++]=array[x++];
            y++;
        }
    }
    for(int i=0; i<finalSize; i++)
    {
        fprintf(output, "%d ", finalArray[i]);
        if(i%10==9)
            fprintf(output, "\n");
    }
}

int main()
{
    FILE* f, *g;
    int arr[100000], arr2[100000], finalArr[200000], el1, el2;
    f = fopen("interclasare2.in", "r");
    readArray(f, arr, &el1);
    readArray(f, arr2, &el2);
    fclose(f);
    g = fopen("interclasare2.out", "w");
    commonsInterclasare(g, arr, arr2, finalArr, el1, el2);
    fclose(g);

    return 0;
}
