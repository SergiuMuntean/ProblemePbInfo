#include <stdio.h>
#include <stdlib.h>

int numarPrim(int n)
{
    int contor = 0;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
            contor+=2;
        if(d*d==n)
            contor++;
    }
    return contor;
}

void replaceArray(int* array, int size)
{
    for(int j=size-1; j>=0; j--)
    {
        if(numarPrim(array[j])==2)
        {
            array[j]=0;
            break;
        }
    }
}


int main()
{

    int numberofElements = 0, arr[1000];
    scanf("%d", &numberofElements);
    for(int i=0; i<numberofElements; i++)
        scanf("%d", arr+i);
    replaceArray(arr, numberofElements);
    for(int i=0; i<numberofElements; i++)
        printf("%d ", *(arr+i));
    return 0;
}
