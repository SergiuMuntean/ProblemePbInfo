#include <stdio.h>
#include <stdlib.h>

void readArray(int *array, int *size)
{
    scanf("%d", size);
    for(int i=1; i<=*size; i++)
    {
        scanf("%d", array+i);
    }
}

void printIndiciPari(int *array, int size)
{
    for(int i=2; i<=size; i=i+2)
    {
        printf("%d ", *(array+i));
    }
    printf("\n");
}

void printIndiciImpari(int *array, int size)
{
    if(size%2==0)
    {
        for(int i=size-1; i>=1; i=i-2)
            printf("%d ", *(array+i));
    }
    else if(size%2==1)
    {
        for(int i=size; i>=1; i=i-2)
            printf("%d ", *(array+i));
    }
}

int main()
{
    int arr[1001], n;
    readArray(arr, &n);
    printIndiciPari(arr, n);
    printIndiciImpari(arr, n);

    return 0;
}
