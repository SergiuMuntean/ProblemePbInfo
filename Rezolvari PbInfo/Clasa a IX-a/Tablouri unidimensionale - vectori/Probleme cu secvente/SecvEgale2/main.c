#include <stdio.h>
#include <stdlib.h>

void readArray(long long* array, long long size)
{
    for(int i=0; i<size; i++)
        scanf("%lld", array+i);
}

void sequences(long long* array, long long size)
{
    long long sum = 0;
    long long contor;
    for(int i=0; i<size; i++)
    {
        contor = 1;
        while(array[i]==array[i+1])
        {
            contor++;
            i++;
        }
        sum += contor*(contor+1)/2;
    }
    printf("%lld", sum);
}

int main()
{
    long long dimension;
    scanf("%lld", &dimension);
    long long* arr = malloc(dimension*sizeof(long long));
    readArray(arr, dimension);
    sequences(arr, dimension);
    return 0;
}
