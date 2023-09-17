#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    int contor = 0;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
            contor+=2;
        if(d*d==n)
            contor++;
    }
    return contor;
}

void readArray(int* arr, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", &arr[i]);
}

void change(int* arr, int* size)
{
    for(int i=0; i<*size; i++)
    {
        if(isPrime(arr[i])==2)
            *(arr+i)=0;
    }
}

void printArray(int* arr, int size)
{
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
}


int main()
{
    int array[1000];
    int* dimension;
    readArray(array,&dimension);
    change(array,&dimension);
    printArray(array,dimension);
    return 0;
}
