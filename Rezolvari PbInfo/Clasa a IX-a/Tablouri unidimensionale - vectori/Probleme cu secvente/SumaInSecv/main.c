#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size, int* sum)
{
    fscanf(input, "%d%d", size, sum);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

void secventa(FILE* output, int* array, int size, int sum)
{
    int value = 0;
    int st = 0;
    int dr = -1;
    int j;
    for(int i=0; i<size-1; i++)
    {
        value = 0;
        for(j=i; j<size; j++)
        {
            value+=array[j];
            if(value>=sum)
                break;
        }
        if(value==sum)
        {
            st = i;
            dr = j;
            break;
        }

    }
    fprintf(output, "%d %d", st+1, dr+1);
}


int main()
{
    FILE *f, *g;
    int arr[100], dim, sum;
    f = fopen("sumainsecv.in", "r");
    readArray(f, arr, &dim, &sum);
    fclose(f);
    g = fopen("sumainsecv.out", "w");
    secventa(g, arr, dim, sum);
    fclose(g);
    return 0;
}
