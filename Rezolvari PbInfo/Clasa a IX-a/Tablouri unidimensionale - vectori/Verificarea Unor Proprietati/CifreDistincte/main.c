#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int numarCuCifreDistincte(int number)
{
    int value = 1;
    int digit[9];
    int i = 0;
    while(number)
    {
       digit[i] = number%10;
       i++;
       number/=10;
    }
    int size = i;
    for(i = 0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
           if(digit[i]==digit[j])
           {
               value = 0;
           }
        }
    }
    return value;
}

void verificare(int* array, int size)
{
    int detect = 1;
    for(int i=0; i<size; i++)
    {
        if(numarCuCifreDistincte(array[i])==0)
        {
            detect = 0;
            break;
        }
    }
    if(detect == 1)
        printf("DA");
    else if(detect == 0)
        printf("NU");
}

int main()
{
    int arr[100], n;
    readArray(arr, &n);
    verificare(arr, n);
    return 0;
}
