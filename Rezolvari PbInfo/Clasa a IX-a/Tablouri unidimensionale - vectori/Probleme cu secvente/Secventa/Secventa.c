#include<stdio.h>
#include<stdlib.h>

void readArray(FILE* input, int* array, int size) { 
    for(int i = 0; i < size; i++) {
        fscanf(input, "%d", &array[i]);
    }
}

void extractLongestSequence(FILE* output, int* array, int* newArr, int* newArrStop, int* sum, int size) {
    int length = 1, lengthmax = 1, maxSequences = 1;
    int start = 0, stop = 0;
    int i, j;
    for(i = 0; i < size - 1; i++) {
        length = 1;
        for(j = i + 1; j < size; j++) {
            if(array[j] % 2 == array[j - 1] % 2) {
                break;
            } else {
                length++;
            }
        }
        if(length > lengthmax || (length == lengthmax && j > stop)) {
            lengthmax = length;
            maxSequences = 1;
            newArr[0] = i;
            newArrStop[0] = j + 1;  // Corectare aici
        } else if(length == lengthmax) {
            maxSequences++;
            newArr[maxSequences - 1] = i;
            newArrStop[maxSequences - 1] = j + 1;  // Corectare aici
        }
    }

     if(length > lengthmax || (length == lengthmax && j > stop)) {
            lengthmax = length;
            maxSequences = 1;
            newArr[0] = i;
            newArrStop[0] = j + 1;  // Corectare aici
        } else if(length == lengthmax) {
            maxSequences++;
            newArr[maxSequences - 1] = i;
            newArrStop[maxSequences - 1] = j + 1;  // Corectare aici
        }

    for(int i = 0; i < maxSequences; i++) {
        for(int j = newArr[i]; j < newArrStop[i]; j++) {
            sum[i] += array[j];
        }
    }

    int max = sum[0];
    for(int i = 0; i < maxSequences; i++) {
        if(sum[i] > max || (sum[i] == max && newArrStop[i] > stop)) {
            max = sum[i];
            start = newArr[i];
            stop = newArrStop[i];  // Corectare aici
        }
    }
    
    fprintf(output, "%d %d\n", start + 1, stop - 1);
}

int main() {
    FILE *f, *g;
    int dim;
    f = fopen("secventa.in", "r");
    fscanf(f, "%d", &dim);
    int* arr = malloc(dim * sizeof(int));
    int* newArr = malloc(dim * sizeof(int));
    int* newArrStop = malloc(dim * sizeof(int));
    int* sum = malloc(dim * sizeof(int));
    readArray(f, arr, dim);
    fclose(f);
    g = fopen("secventa.out", "w");
    extractLongestSequence(g, arr, newArr, newArrStop, sum, dim);
    fclose(g);
    free(arr);
    free(newArr);
    free(newArrStop);
    free(sum);
    return 0;
}

