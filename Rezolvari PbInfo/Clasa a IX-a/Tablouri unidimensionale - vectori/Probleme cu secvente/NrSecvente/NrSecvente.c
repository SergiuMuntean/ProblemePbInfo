#include<stdio.h>
#include<stdlib.h>

void readArray(int* array, int size) {
    for(int i = 0; i < size; i++)
        scanf("%d", &array[i]);
}

int countSequences(int* array, int size, int value, int length) {
    int sequences = 0;
    for(int i = 0; i < size - 1; i++) {
        for(int j = i; j < size; j++) {
            if(array[j] > value)
                break;
            if(j - i + 1 == length) {
                sequences++;
                break;
            }
        }
    }
    return sequences;
}

int main(void) {
    int dim, value, length;
    scanf("%d%d%d", &dim, &value, &length);
    int* arr = malloc(dim * sizeof(int));
    readArray(arr, dim);
    int seqNr = countSequences(arr, dim, value, length);
    printf("%d", seqNr);
    return 0;
}