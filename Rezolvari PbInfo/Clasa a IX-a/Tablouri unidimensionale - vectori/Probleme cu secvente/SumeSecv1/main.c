#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int size)
{
    for(int i=1; i<=size; i++)
        scanf("%d", array+i);
}

void calculateSum(int* array, int size, int x, int y)
{
    int pairs;
    long long maxSum = 0;
    long long sum;
    scanf("%d", &pairs);
    for(int k=1; k<=pairs; k++)
    {
        sum = 0;
        scanf("%d%d", &x, &y);
        if(x>y)
        {
            int aux = x;
            x = y;
            y = aux;
        }
        for(int i=x; i<=y; i++)
        {
            sum+=array[i];
        }
        if(sum>maxSum)
            maxSum = sum;
    }
    printf("%lld", maxSum);
}

int main()
{
    int dimension;
    int x, y;
    scanf("%d", &dimension);
    int *arr = malloc(dimension*sizeof(int));
    readArray(arr, dimension);
    calculateSum(arr, dimension, x, y);
    return 0;
}
