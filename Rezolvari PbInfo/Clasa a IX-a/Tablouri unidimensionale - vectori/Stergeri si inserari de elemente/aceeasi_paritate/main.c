#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=1; i<=*size; i++)
        scanf("%d", array+i);
}

void printNewVector(int* array, int size)
{
    for(int i=1; i<=size; i++)
    {
        int value_1 = abs(array[i]%2);
        int value_2 = abs(array[i+1]%2);
        if(value_1== value_2 && array[i]!=array[size])
            printf("%d %d ", array[i], (int) (array[i]+array[i+1])/2);
        else if(array[i]!=array[size])
            printf("%d ", array[i]);
        if(array[i]== array[size])
            printf("%d", array[i]);
    }
}

int main()
{
    int arr[1000001];
    int n;
    readArray(arr, &n);
    printNewVector(arr, n);
    return 0;
}
