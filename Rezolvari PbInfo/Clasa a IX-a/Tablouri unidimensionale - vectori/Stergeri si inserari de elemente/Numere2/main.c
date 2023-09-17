#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireSiSelectieVector(int* array, int* size)
{
    int count = 0;
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
    {
        fscanf(f, "%d", array+i);
    }
    int i = 0;
    while(i<*size)
    {
        if(i>=1)
        {
            if(array[i]==array[i-1])
            {
                count++;
                i+=2;
            }
            else
                i++;
        }
        if(i==0)
            i++;
    }
    fprintf(g, "%d\n", count);
    int j = 0;
    while(j<*size)
    {
        if(array[j]==array[j+1])
        {
            j+=2;
        }
        else if(array[j+1]!=array[j])
        {
            fprintf(g, "%d ", array[j++]);
        }
    }
}


int main()
{
    int arr[25001];
    int n;
    f = fopen("numere2.in", "r");
    g = fopen("numere2.out", "w");
    citireSiSelectieVector(arr, &n);
    fclose(f);
    fclose(g);
    return 0;
}
