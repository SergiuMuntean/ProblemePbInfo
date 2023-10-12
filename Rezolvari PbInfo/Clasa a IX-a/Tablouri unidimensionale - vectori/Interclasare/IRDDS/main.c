#include <stdio.h>
#include <stdlib.h>

void readArray(int* array, int size)
{
    for(int i=0; i<size; i++)
        scanf("%d", array+i);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* array, int low, int high) {
    int pivot = array[high]; // Choose the rightmost element as the pivot
    int i = (low - 1);       // Initialize the index of the smaller element

    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot
        if (array[j] <= pivot) {
            i++; // Increment index of the smaller element
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int* array, int low, int high) {
    if (low < high) {
        // Partition the array into two subarrays
        int pi = partition(array, low, high);

        // Recursively sort elements before and after partition
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

void intersection(int* array1, int* array2, int s1, int s2)
{
    int x = 0;
    int y = 0;
    while(x<s1 && y<s2)
    {
        if(array1[x]<array2[y])
            x++;
        else if(array1[x]>array2[y])
            y++;
        else if(array1[x]==array2[y])
        {
            printf("%d ", array1[x++]);
            y++;
        }
    }
}

void reunion(int* array1, int* array2, int s1, int s2)
{
    int x = 0;
    int y = 0;

    while(x<s1 && y<s2)
    {
        if(array1[x]<array2[y])
            printf("%d ", array1[x++]);
        else if(array1[x]>array2[y])
            printf("%d ", array2[y++]);
        else if(array1[x]==array2[y])
        {
            printf("%d ", array1[x++]);
            y++;
        }
    }

    if(x<s1)
    {
        for(int i=x; i<s1; i++)
            printf("%d ", array1[i]);
    }
    if(y<s2)
    {
        for(int i=y; i<s2; i++)
            printf("%d ", array2[i]);
    }

}

void difference(int* array1, int* array2, int* difArray, int s1, int s2)
{
    int x = 0;
    int y = 0;
    int finalSize = 0;
    while(x<s1 && y<s2)
    {
        if(array1[x]<array2[y])
            x++;
        else if(array1[x]>array2[y])
            y++;
        else if(array1[x]==array2[y])
        {
            difArray[finalSize++] = array1[x++];
            y++;
        }
    }
    int k = 0;
    for(int i=0; i<s1; i++)
    {
        if(array1[i]==difArray[k])
        {
            k++;
            continue;
        }
        printf("%d ", array1[i]);
    }
}

void symmetric(int* array1, int* array2, int* symArray,int* reArray, int s1, int s2)
{
    //intersection
    int x1 = 0;
    int y1 = 0;
    int finalSize1 = 0;
    while(x1<s1 && y1<s2)
    {
        if(array1[x1]<array2[y1])
            x1++;
        else if(array1[x1]>array2[y1])
            y1++;
        else if(array1[x1]==array2[y1])
        {
            symArray[finalSize1++] = array1[x1++];
            y1++;
        }
    }
    //reunion
    int x = 0;
    int y = 0;
    int finalSize = 0;
    while(x<s1 && y<s2)
    {
        if(array1[x]<array2[y])
            reArray[finalSize++] = array1[x++];
        else if(array1[x]>array2[y])
            reArray[finalSize++] = array2[y++];
        else if(array1[x]==array2[y])
        {
            reArray[finalSize++] = array1[x++];
            y++;
        }
    }

    if(x<s1)
    {
        for(int i=x; i<s1; i++)
            reArray[finalSize++] = array1[i];
    }
    if(y<s2)
    {
        for(int i=y; i<s2; i++)
            reArray[finalSize++] = array2[i];
    }
    //end reunion
    int k = 0;
    for(int i=0; i<finalSize; i++)
    {
        if(reArray[i]==symArray[k])
        {
            k++;
            continue;
        }
        printf("%d ", reArray[i]);
    }
}

int main()
{
    //int arr[2000], arr2[2000], inArr[2000], rezArr[4000];
    int s1, s2;
    char op;
    scanf("%d %d %c", &s1, &s2, &op);

    if (s1 > s2)
    {
        int aux = s1;
        s1 = s2;
        s2 = aux;
    }

    int *arr = malloc(s1 * sizeof(int));
    int *arr2 = malloc(s2 * sizeof(int));
    int *inArr = malloc(s2*sizeof(int));
    int *rezArr = malloc((s1+s2)*sizeof(int));

    readArray(arr, s1);
    readArray(arr2, s2);

    quickSort(arr, 0, s1-1);
    quickSort(arr2, 0, s2-1);

    if(op=='*')
        intersection(arr, arr2, s1, s2);
    else if(op=='+')
        reunion(arr, arr2, s1, s2);
    else if(op=='-')
        difference(arr, arr2, rezArr, s1, s2);
    else if(op=='%')
        symmetric(arr, arr2, inArr, rezArr, s1, s2);

    return 0;
}
