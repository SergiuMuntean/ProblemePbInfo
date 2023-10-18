#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void countSequences(int* array, int* array2, int s1, int s2)
{
    int contor = 0;
    int j, k;
    for(int i=0; i<s1; i++)
    {
        k = i;
        j = 0;
        while(array[i]==array2[j] && i<s1 && j<s2)
        {
            i++;
            j++;
        }
        if(j==s2)
            contor++;
        i = k;
    }
    printf("%d", contor);
}

int main()
{
    int arr[1000], arr2[1000];
    int el1, el2;
    readArray(arr, &el1);
    readArray(arr2, &el2);
    countSequences(arr, arr2, el1, el2);
    return 0;
}
