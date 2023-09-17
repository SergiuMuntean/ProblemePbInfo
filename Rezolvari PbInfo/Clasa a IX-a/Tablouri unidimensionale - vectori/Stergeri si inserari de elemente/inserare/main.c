#include <stdio.h>
#include <stdlib.h>

void citireVector(int* array, int* size, int* value, int* pozitie)
{
    scanf("%d %d %d", size, value, pozitie);
    for(int i=1; i<=*size; i++)
        scanf("%d", array+i);
}

void inserareElem(int* array, int size, int value, int pozitie)
{
    size++;
    for(int i=size; i>pozitie; i--)
    {
        array[i]= array[i-1];
    }
    array[pozitie]= value;
    for(int i=1; i<=size; i++)
        printf("%d ", array[i]);

}
int main()
{
    int arr[1001], n, valoare, position;
    citireVector(arr, &n, &valoare, &position);
    inserareElem(arr, n, valoare, position);
    return 0;
}
