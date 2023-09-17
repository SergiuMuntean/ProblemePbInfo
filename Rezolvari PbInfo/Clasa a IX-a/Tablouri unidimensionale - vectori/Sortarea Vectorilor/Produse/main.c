#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int* cerinta, int* size)
{
    fscanf(input, "%d%d", cerinta, size);
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", array+i);
}

int extractFirstDigit(int number)
{
    while(number>9)
        number/=10;
    return number;
}

int extractSecondDigit(int number)
{
    while(number>99)
        number/=10;
    int value = number%10;
    return value;
}

void stockProductsNotAvailable(FILE* output, int* array, int size)
{
    int even = 0;
    int odd = 0;
    for(int i=0; i<size; i++)
    {
        if(extractSecondDigit(array[i])%2==0)
            even++;
        else
            odd++;
    }
    fprintf(output, "%d %d", even, odd);
}

void sortProducts(int* array, int size)
{
    int s1 = size-1;
    for(int i=0; i<s1; i++)
    {
        int s2 = i+1;
        for(int j=s2; j<size; j++)
            if(extractFirstDigit(array[i])>  extractFirstDigit(array[j]))
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
    }
    int p1 = size-1;
    for(int i=0; i<p1; i++)
    {
        int p2 = i+1;
        for(int j=p2; j<size; j++)
            if(extractFirstDigit(array[i])== extractFirstDigit(array[j]) && array[i] > array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
    }

}

void displayProducts(FILE* output, int* array, int size)
{
    int i = 0;
    for(int k=0; k<10; k++)
    {
        if(extractFirstDigit(array[i])==k)
        {
            fprintf(output, "%d ", k);
            while(extractFirstDigit(array[i])==k)
            {
                fprintf(output, "%d ", array[i]);
                ++i;
            }
            fprintf(output, "\n");
        }
        if(i>=size)
            break;
    }
}

int main()
{
    FILE* f, *g;
    int arr[1000], task, dimension;
    f = fopen("produse.in", "r");
    readArray(f, arr, &task, &dimension);
    fclose(f);
    g = fopen("produse.out", "w");
    if(task==1)
        stockProductsNotAvailable(g, arr, dimension);
    if(task==2)
    {
        sortProducts(arr, dimension);
        displayProducts(g, arr, dimension);
    }
    fclose(g);
    return 0;
}
