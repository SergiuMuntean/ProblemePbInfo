#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, int* array, int size) {
    for(int i = 0; i < size; i++) {
        fscanf(input, "%i", array+i);
    }
}

void detSequences(FILE* output, int* array, int size) {
    int length = 1, lengthmax = 1;
    int start = 0, stop = 0;
    int i, j;
    for(i = 0; i < size - 1; i++) {
        length = 1;
        for(j = i + 1; j < size; j++) {
            if(array[j] % 10 != array[j - 1] % 10) {
                break;
            }
            else {
                length++;
            }
        }
        if(length > lengthmax) {
            lengthmax = length;
            start = i;
            stop = j - 1;
        }
        i = j - 1;
    }

    if(length > lengthmax) {
        lengthmax = length;
        start = i;
        stop = j - 1;
    }

    fprintf(output, "%d %d", start + 1, stop + 1);
}

int main() {
    FILE *f, *g;
    int dim;
    f = fopen("secventa4.in", "r");
    fscanf(f, "%i", &dim);
    int* arr = malloc(dim * sizeof(int));
    readArray(f, arr, dim);
    fclose(f);
    g = fopen("secventa4.out", "w");
    detSequences(g, arr, dim);
    fclose(g);
    free(arr);
    return 0;
}