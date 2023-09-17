#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireVector(int* array, int* size)
{
    fscanf(f, "%d", size);
    for(int i=1; i<=*size; i++)
        fscanf(f, "%d", array+i);
}

void determinareMaxim(int* array, int size, int maxim, int m, int n)
{
    for(int i=1; i<=size/2; i++)
    {
        {
            if(array[i]+array[size-i+1]>maxim)
                maxim = array[i] + array[size-i+1], m = i, n= size-i+1;
        }
    }
    fprintf(g, "%d %d %d", maxim, m, n);
}

int main()
{
    int arr[1000], n, max, m , p;
   f = fopen("maxsim.in", "r");
   g = fopen("maxsim.out", "w");
   citireVector(arr, &n);
   determinareMaxim(arr, n, max, m, p);
   fclose(f);
   fclose(g);
    return 0;
}
