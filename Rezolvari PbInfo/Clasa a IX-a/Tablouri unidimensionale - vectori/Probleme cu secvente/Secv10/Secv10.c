#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, int* array, int size) {
    for(int i = 0; i < size; i++) {
        fscanf(input, "%d", array+i);
    }
}

void lenNumberSequences(FILE* output, int* array, int size) {
    int length = 0, lengthmax = 0, contor = 0;
    for(int i = 0; i < size; i++) {
        if(array[i] % 10 == 0) {
            length++;
        }
        else {
            if(length > lengthmax) {
                lengthmax = length;
                contor = 1;
            }
            else if(length == lengthmax) {
                contor++;
            }
            length = 0;
        }
    }

    if(length > lengthmax) {
        lengthmax = length;
        contor = 1;
    }

    else if(length == lengthmax)
        contor++;
    
    fprintf(output, "%d %d", lengthmax, contor);   
}

int main() {
    FILE *f, *g;
    int dim;
    f = fopen("secv10.in", "r");
    fscanf(f, "%d", &dim);
    int* arr = malloc(dim * sizeof(int));
    readArray(f, arr, dim);
    fclose(f);
    g = fopen("secv10.out", "w");
    lenNumberSequences(g, arr, dim);
    fclose(g);
    free(arr);
}