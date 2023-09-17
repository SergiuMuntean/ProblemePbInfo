#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

int checker(int* array, int size)
{
    int value = 1;
    for(int i=1; i<size; i++)
    {
        if((*(array+i-1))>(*(array+i)))
        {
            value = 0;
            break;
        }
    }
    return value;
}

int main()
{
    int arr[500], n, rezultat[10];
    int repetari;
    scanf("%d", &repetari);
    for(int i=0; i<repetari; i++)
    {
        readArray(arr, &n);
        rezultat[i] = checker(arr, n);
    }
    for(int i=0; i<repetari; i++)
        printf("%d ", rezultat[i]);
    return 0;
}
