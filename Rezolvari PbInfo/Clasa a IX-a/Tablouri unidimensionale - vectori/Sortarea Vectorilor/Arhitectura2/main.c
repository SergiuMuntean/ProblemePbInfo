#include <stdio.h>
#include <stdlib.h>


void readArray(FILE *input, int** arr, int* size)
{
    fscanf(input, "%d", size);
    int* arr2 = malloc((*size) * sizeof(int));
    for(int i=0; i<*size; i++)
        fscanf(input, "%d", arr2+i);

    *arr = arr2;
}

// function to find the partition position
int partition(int* array, int low, int high) {

  // select the rightmost element as pivot
  int pivot = array[high];

  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] > pivot) {

      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;

      // swap element at i with element at j
      int aux = array[i];
      array[i] = array[j];
      array[j] = aux;
    }
  }

  // swap the pivot element with the greater element at i
  int aux = array[i+1];
  array[i+1] = array[high];
  array[high] = aux;

  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {

    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

void sortArray(FILE *output, int* arr, int* newArr, int size)
{
    quickSort(arr, 0, size-1);

    newArr = malloc(size * sizeof(int));

    if(arr[0]==((float)arr[1]/2))
        newArr[0] = 1;
    else
        newArr[0] = 0;

    if(arr[size-1]==((float)arr[size-2]/2))
        newArr[size-1] = 1;
    else
        newArr[size-1] = 0;

    for(int i=1; i<size-1; i++)
    {
        if(arr[i] == (((float)arr[i-1]+arr[i+1])/2))
            newArr[i] = 1;
        else
            newArr[i] = 0;
    }

    for(int i=0; i<size; i++)
        fprintf(output, "%d ", arr[i]);
    fprintf(output, "\n");
    for(int i=0; i<size; i++)
        fprintf(output, "%d ", newArr[i]);
}

int main()
{
    FILE *f, *g;
    int* array;
    int* newArray;
    int n;
    f = fopen("arhitectura2.in", "r");
    readArray(f, &array, &n);
    fclose(f);
    g = fopen("arhitectura2.out", "w");
    sortArray(g, array, newArray, n);
    fclose(g);
    return 0;
}
