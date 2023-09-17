#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void readNumber(FILE* input,unsigned long long* number)
{
    fscanf(input, "%llu", number);
}

long long eliminateIndex(unsigned long long number,unsigned long long index)
{
    long long newNumber;
    long long divider = pow(10,index);
    long long fixer = pow(10,index-1);
    newNumber = number/divider*fixer+number%fixer;
    return newNumber;
}

unsigned int sizeCalculator(unsigned long long number)
{
    int contor = 0;
    while(number)
    {
        number/=10;
        contor++;
    }
    return contor;
}

void createVector(unsigned long long* array, unsigned long long size, unsigned long long number)
{
    for(int i=0; i<size; i++)
        array[i] = eliminateIndex(number,i+1);
}

int primeIntreEle(unsigned long long n, unsigned long long m)
{
    while(m!=0)
    {
        long long rest = n%m;
        n = m;
        m = rest;
    }
    return n;
}

void adjustArray(unsigned long long* array, unsigned long long size, unsigned long long* newArray, unsigned long long* newSize, unsigned long long number)
{
    unsigned long long j = 0;
    for(int i=0; i<size; i++)
    {
        if(primeIntreEle(number, array[i])==1 && array[i]!=0)
            newArray[j++] = array[i];
    }
    *newSize = j;
}

void sortArray(FILE* output, unsigned long long* array, unsigned int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<size; j++)
        {
            if(array[j] < array[i])
            {
                unsigned long long aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    if(size==0)
        fprintf(output, "NU EXISTA");
    else for(int i=0; i<size; i++)
        fprintf(output, "%llu ", array[i]);
}

int main()
{
    unsigned long long value;
    unsigned long long arr[16], newArr[16];
    FILE *f, *g;
    f = fopen("numere16.in", "r");
    readNumber(f, &value);
    fclose(f);
    int dimension = sizeCalculator(value);
    createVector(arr, dimension, value);
    unsigned long long newDimension;
    adjustArray(arr, dimension, newArr, &newDimension, value);
    g = fopen("numere16.out", "w");
    sortArray(g, newArr, newDimension);
    fclose(g);
    return 0;
}
