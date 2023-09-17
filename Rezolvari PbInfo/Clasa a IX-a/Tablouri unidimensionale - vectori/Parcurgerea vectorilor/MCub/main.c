#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;

void citireVector(int* array, int* size)
{
    fscanf(f, "%d", size);
    for(int i=1; i<=*size; i++)
        fscanf(f, "%d", array+i);
}

int maximVector(int* array, int size)
{
    int maxim = 0;
    for(int i=1; i<=size; i++)
        if(array[i]>maxim)
            maxim = array[i];
    return maxim;
}

void determinareOperatii(int* array, int size)
{
    int array2[1000001];
    for(int i=1; i<=size; i++)
        array2[i] = 0;
    int a = 0, slice;
    do
        {
        for(int i=1; i<=size; i++)
        {
            if(array[i]==a)
            {
                array[i]=a;
                int j = i;
                for(int m = 1, n = size; m < j, n > j; m++, n--)
                    array2[i]++;
                break;
            }
        }

        a++;
    }while(a<=maximVector(array, size));
    printf("%d ", maximVector(array, size));
    for(int i=1; i<=size; i++)
        printf("%d", array2[i]);
}

int main()
{
    int arr[100001], n;
    f = fopen("mcub.in", "r");
    g = fopen("mcub.out", "w");
    citireVector(arr, &n);
    maximVector(arr, n);
    determinareOperatii(arr, n);
    fclose(f);
    fclose(g);
    return 0;
}
