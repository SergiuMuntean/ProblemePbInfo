#include<stdio.h>
#include<stdlib.h>

void readArray(int* array, int size) {
    for(int i = 0; i < size; i++)
        scanf("%i", &array[i]);
}

int countSequences(int* array, int size, int k) {
    int contor = 0;
    int sequences = 0;
    for(int i = 0; i < size; i++) {
        if(array[i] % 2 == 1)
            contor++;
        if(contor >= k) {
            sequences++;
            contor = 0;
        }
    }
    if(contor > 0)
        return sequences + 1;
    else
        return sequences;
}

int main() {
    int dim, x;
    scanf("%d%d", &dim, &x);
    int *arr = malloc(dim * sizeof(int));
    readArray(arr, dim);
    int returnValue = countSequences(arr, dim, x);
    printf("%d", returnValue);
    free(arr);
}
