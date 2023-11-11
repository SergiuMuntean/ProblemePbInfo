#include <stdio.h>
#include <stdlib.h>

void readArray(FILE* input, int* array, int size) {
    for (int i = 0; i < size; i++) {
        fscanf(input, "%d", &array[i]);
    }
}

void detSeq(FILE* output, int* array, int size) {
    int start = 0, fstart = 0, length = 1, lengthmax = 1;

    for (int i = 1; i < size; i++) {
        if (array[i] > array[i - 1]) {
            length++;
        } else {
            if (length > lengthmax) {
                lengthmax = length;
                fstart = start;
            }
            start = i;
            length = 1;
        }
    }

    if (length > lengthmax) {
        fstart = start;
    }

    fprintf(output, "%d %d", fstart + 1, fstart + lengthmax);
}

int main() {
    FILE *f, *g;
    int dim;
    f = fopen("secvcresc.in", "r");
    fscanf(f, "%d", &dim);
    int* arr = malloc(dim * sizeof(int));
    readArray(f, arr, dim);
    fclose(f);
    g = fopen("secvcresc.out", "w");
    detSeq(g, arr, dim);
    fclose(g);
    free(arr);
    return 0;
}