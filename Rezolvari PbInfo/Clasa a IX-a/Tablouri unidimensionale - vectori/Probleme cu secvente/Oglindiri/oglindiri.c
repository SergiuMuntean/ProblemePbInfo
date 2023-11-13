#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, int* array, int size) {
    for(int i = 0; i < size; i++) {
        fscanf(input, "%i", &array[i]);
    }
}

void interchange(int* array, int size, int start, int stop) {
    int j = 0;
    for(int i = start; i <= (start + stop) / 2; i++) {
        int aux = array[i];
        array[i] = array[stop - j];
        array[stop - j] = aux;
        j++;
    }
}

void printArray(FILE* output, int* array, int size) {
    for(int i = 0; i < size; i++) {
        fprintf(output, "%d ", array[i]);
    }
}

int main() {
    FILE *f, *g;
    int dim, pairs, start, stop;
    f = fopen("oglindiri.in", "r");
    fscanf(f, "%i", &dim);
    int* arr = malloc(dim * sizeof(int));
    readArray(f, arr, dim);
    fscanf(f, "%i", &pairs);
    for(int i = 0; i < pairs; i++) {
        fscanf(f, "%d%d", &start, &stop);
        interchange(arr, dim, start - 1, stop - 1);
    }
    fclose(f);
    g = fopen("oglindiri.out", "w");
    printArray(g, arr, dim);
    fclose(g);
    free(arr);
    return 0;
}
