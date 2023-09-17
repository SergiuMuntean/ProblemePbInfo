#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int numarPrim(int number)
{
    int contor = 0;
    for(int d=1; d*d<=number; d++)
    {
        if(number%d==0 && d*d<number)
            contor +=2;
        if(d*d==number)
            contor ++;
    }
    if(contor==2)
        return 1;
    else
        return 0;
}

void checker(int* array, int size)
{
    int contor = 0;
    for(int i=0; i<size; i++)
    {
        if(numarPrim(array[i])==1)
        {
            contor = 1;
            break;
        }
    }
    if(contor==0)
        printf("NU");
    else if(contor==1)
        printf("DA");
}

int main()
{
    int arr[200], n;
    readArray(arr, &n);
    checker(arr, n);
    return 0;
}
