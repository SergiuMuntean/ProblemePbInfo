#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* size)
{
    fscanf(input, "%d", size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

int isPrime(int number)
{
    int contor = 0;
    for(int d=1; d*d<=number; d++)
    {
        if(number%d==0 && d*d<number)
            contor+=2;
        if(d*d==number)
            contor++;
    }
    if(contor==2)
        return 1;
    else
        return 0;
}

void firstAndLastPrime(int* array, int size, int* first, int* last)
{
    for(int i=0; i<size; i++)
    {
        if(isPrime(array[i])==1)
        {
            *first = i;
            break;
        }
    }

    for(int i=size-1; i>=0; i--)
    {
        if(isPrime(array[i])==1)
        {
            *last = i;
            break;
        }
    }
}

void calculateSum(FILE*output, int* array, int size, int first, int last)
{
    long long sum = 0;
    {
        for(int i=first; i<=last; i++)
            sum += array[i];
    }
    fprintf(output, "%lld", sum);
}

int main()
{
    FILE *f, *g;
    int arr[1000], dimension, start, stop;
    f = fopen("sumsec.in", "r");
    readArray(f, arr, &dimension);
    fclose(f);
    firstAndLastPrime(arr, dimension, &start, &stop);
    g = fopen("sumsec.out", "w");
    calculateSum(g, arr, dimension, start, stop);
    fclose(g);
    return 0;
}
