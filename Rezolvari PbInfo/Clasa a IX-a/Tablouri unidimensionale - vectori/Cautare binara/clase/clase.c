#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, long long* array, int size) {
    for(int i = 0; i < size; i++) {
        fscanf(input, "%lld", array+i);
    }
}

long long binarySearch(long long* array, long long* newArray, int size, int size2) {
    int left, right, mid, x;
    long long contor = 0;
    for(int i = 0; i < size2; i++) {
        left = 0;
        right = size - 1;
        while(left <= right) {
            mid = (left + right) / 2;
            if(newArray[i] == array[mid]) {
                contor++;
                break;
            }
            if(newArray[i] > array[mid]) {
                left = mid + 1;
            }
            if(newArray[i] < array[mid]) {
                right = mid - 1;
            }
        }
    }
    return contor;
}

int main() {
    FILE *f, *g;
    int dim, dim2;
    f = fopen("clase.in", "r");
    fscanf(f, "%d", &dim);
    long long* arr = malloc(dim * sizeof(long long));
    readArray(f, arr, dim);
    fscanf(f, "%d", &dim2);
    long long* newArr = malloc(dim2 * sizeof(long long));
    readArray(f, newArr, dim2);
    fclose(f);
    g = fopen("clase.out", "w");
    long long value = binarySearch(arr, newArr, dim, dim2);
    fprintf(g, "%lld", value);
    fclose(g);
    free(arr);
    free(newArr);
    return 0;
}