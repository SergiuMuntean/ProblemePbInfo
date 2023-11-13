#include<stdio.h>
#include<stdlib.h>

void readArray(int* array, int size) {
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

void binarySearchResult(int* arr, int* newArr, int* finalArray, int size, int newSize) {
    int left, right, mid;
    for(int i = 0; i < newSize; i++) {
        finalArray[i] = 0;
        left = 0;
        right = size - 1;
        while(left <= right) {
            mid = (left + right) / 2;
            if(arr[mid] == newArr[i]) {
                finalArray[i] = 1;
                break;
            }
            if(newArr[i] > arr[mid]) {
                left = mid + 1;
            }
            if(newArr[i] < arr[mid]) {
                right = mid - 1;
            }
        }
    }

    for(int i = 0; i < newSize; i++) {
        printf("%d ", finalArray[i]);
    }
}

int main() {
    int dim, dim2;
    scanf("%d", &dim);
    int* arr = malloc(dim * sizeof(int));
    readArray(arr, dim);
    scanf("%d", &dim2);
    int* newArr = malloc(dim2 * sizeof(int));
    readArray(newArr, dim2);
    int* finalArr = malloc(dim2 * sizeof(int));
    binarySearchResult(arr, newArr, finalArr, dim, dim2);
    free(arr);
    free(newArr);
    free(finalArr);
    return 0;
}
