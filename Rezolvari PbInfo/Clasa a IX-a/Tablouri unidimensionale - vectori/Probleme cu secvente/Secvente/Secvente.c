#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, int* array, int size) {
    for(int i = 0; i < size; i++)
        fscanf(input, "%i", array+i);
}

int countSequences(int* array, int size) {
    int count = 0;
    if(size >= 1)
        count = 1;
    for(int i = 1; i < size; i++) {
        if(array[i-1] > array[i])
            count++;
    }
    return count;
}

int main() {
    FILE *f, *g;
    int dim;
    f = fopen("secvente.in", "r");
    fscanf(f, "%i", &dim);
    int *arr = malloc(dim * sizeof(int));
    readArray(f, arr, dim);
    fclose(f);
    g = fopen("secvente.out", "w");
    int value = countSequences(arr, dim);
    fprintf(g, "%i", value);
    fclose(g);
    free(arr);
    return 0;
}