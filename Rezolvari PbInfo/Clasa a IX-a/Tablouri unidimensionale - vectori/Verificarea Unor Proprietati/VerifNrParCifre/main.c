#include <stdio.h>
#include <stdlib.h>

void readArray(long long* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int countParitateCifre(long long number)
{
    int counter = 0;
    while(number)
    {
        number/=10;
        counter++;
    }
    return counter;
}

void checker(long long* array, int size)
{
    int value = 1;
    for(int i=0; i<size; i++)
    {
        if(countParitateCifre(*(array+i))%2==1)
        {
            value = 0;
            break;
        }
    }
    if(value==1)
        printf("DA");
    else
        printf("NU");
}

int main()
{
    long long arr[1000];
    int n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
