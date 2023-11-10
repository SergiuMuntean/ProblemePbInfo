#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, int* array, int size) {
    for(int i = 0; i < size; i++)
        fscanf(input, "%i", &array[i]);
}

int calculateSum(int* array, int i, int j) {
    int sum = 0;
    for(int k = i; k <= j; k++) {
        sum += array[k];
    }
    return sum;
}

int main() {
    int dim, seqAmount, pair1, pair2;
    FILE *f, *g;
    f = fopen("sumesecv.in", "r");
    fscanf(f, "%d", &dim);
    int* arr = malloc(dim * sizeof(int));
    readArray(f, arr, dim);
    fscanf(f, "%i", &seqAmount);
    int *newArr = malloc(dim * sizeof(int));
    for(int i = 0; i < seqAmount; i++) {
        fscanf(f, "%d%d", &pair1, &pair2);
        newArr[i] = calculateSum(arr, pair1-1, pair2-1);
    }
    fclose(f);
    g = fopen("sumesecv.out", "w");
    for(int i = 0; i < seqAmount; i++)
        fprintf(g, "%d ", newArr[i]);
    fclose(g);
    free(arr);
    free(newArr);
    return 0;
}