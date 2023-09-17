#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

const char* checker(int* array, int size)
{
    int adevarat = 0;
    for(int i=1; i<size-1; i++)
    {
        if(array[i-1]%2==array[i+1]%2 && array[i-1]%2==array[i]%2)
        {
            adevarat = 1;
            break;
        }
    }
    if(adevarat==1)
        return "DA";
    else
        return "NU";
}

int main()
{
    int arr[100], n;
    readArray(arr, &n);
    printf("%s", checker(arr, n));
    return 0;
}
