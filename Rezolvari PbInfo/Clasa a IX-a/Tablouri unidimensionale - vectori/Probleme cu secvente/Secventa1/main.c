#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int* size)
{
    scanf("%d", size);
    for(int i=0; i<*size; i++)
        scanf("%d", array+i);
}

void checkSequence(int* array, int* array2, int s1, int s2)
{
    int contor = 0;
    int j, k;
    for(int i=0; i<s1; i++)
    {
        for(j=0; j<s2; j++)
        {
            j = 0;
            if(array[i]!=array2[j])
                break;
            if(array[i]==array2[j])
            {
                k =  i;
                while(array[i+1]==array2[j+1])
                {
                    i++;
                    j++;
                    if(i==s1 || j==s2)
                        break;
                }
            }
            if(j==s2)
                break;
        }
        if(j==s2)
        {
            contor  = 1;
            break;
        }
    }
    if(contor == 1)
        printf("%d", k+1);
    else
        printf("NU");
}

int main()
{
    int arr[1000], arr2[1000];
    int el1, el2;
    readArray(arr, &el1);
    readArray(arr2, &el2);
    checkSequence(arr, arr2, el1, el2);
    return 0;
}
