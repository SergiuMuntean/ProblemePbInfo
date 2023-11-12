#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, int* array, int size) {
    for(int i = 0; i < size; i++) {
        fscanf(input, "%d", &array[i]);
    }
}

void determineSequence(FILE* output, int* array, int size) {
    int start = 0, stop = 0;
    int length, lengthmax = 1;
    int i, j;
    for(i = 0; i < size - 1; i++) {
        length = 1;
        for(j = i + 1; j < size; j++) {
            if(array[j] % 2 == array[j - 1] % 2) {
                break;
            }
            else {
                length++;
            }
        }
        if(length >= lengthmax) {
            lengthmax = length;
            start = i;
            stop = j - 1;
        }
    }
    if(length >= lengthmax) {
        lengthmax = length;
        start = i;
        stop = j - 1;
    }

    fprintf(output, "%d %d", start + 1, stop + 1);
}

int main() {
    FILE *f, *g;
    int dim;
    f = fopen("secventa3.in", "r");
    fscanf(f, "%d", &dim);
    int* arr = malloc(dim * sizeof(int));
    readArray(f, arr, dim);
    fclose(f);
    g = fopen("secventa3.out", "w");
    determineSequence(g, arr, dim);
    fclose(g);
    free(arr);
}