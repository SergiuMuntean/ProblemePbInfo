#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, int* array, int size) {
    for(int i = 0; i < size; i++) {
        fscanf(input, "%d", &array[i]);
    }
}

void detSeq(FILE* output, int* array, int size) {
    int start = 0;
    int stop = 0;
    int length = 0;
    int lengthmax = 0;
    int fstart = 0, fstop = 0;
    for(int i = 0; i < size - 1; i++) {
        start = i;
        for(int j = i; j < size; j++) {
            if(array[j + 1] < array[j]) {
                break;
            }
            else {
                stop = j + 1;
                length = stop - start + 1;
            }
        }
        if(length > lengthmax) {
            lengthmax = length;
            fstart = start;
            fstop = stop;
        }
    }
    fprintf(output, "%d %d", fstart + 1, fstop + 1);
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
    return 0;
}