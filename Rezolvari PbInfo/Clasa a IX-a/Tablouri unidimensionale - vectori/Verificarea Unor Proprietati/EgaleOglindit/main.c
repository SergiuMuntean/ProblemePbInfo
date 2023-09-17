#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int oglindit(int number)
{
    int oglindit = 0;
    while(number)
    {
        oglindit = oglindit * 10 + number%10;
        number/=10;
    }
    return oglindit;
}

void checker(int* array, int size)
{
    int value = 0;
    for(int i = 1; i<size; i++)
    {
        if(oglindit(array[0])==array[i])
        {
            value = 1;
            break;
        }
    }
    if(value == 0)
        printf("NU");
    else if(value == 1)
        printf("DA");
}

int main()
{
    int arr[100], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
