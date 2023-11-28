#include <stdio.h>

int arr[10000];

void readMatrix(int mat[][100], int *rows, int *cols, char* character) {
    scanf("%d%d %c", rows, cols, character);
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            scanf("%d", mat[i] + j);
        }
    }
}

void copyMatrix(int mat[][100], int rows, int cols, int *size) {
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[k++] = mat[i][j];
        }
    }
    *size = k;
}

void sortMatrix(int size, char character, int rows, int cols) {
    int s1 = size - 1;
    if (character == '+') {
        for (int i = 0; i < s1; i++) {
            int s2 = i + 1;
            for (int j = s2; j < size; j++) {
                if (arr[i] > arr[j]) {
                    int aux = arr[i];
                    arr[i] = arr[j];
                    arr[j] = aux;
                }
            }
        }
    } else {
        for (int i = 0; i < s1; i++) {
            int s2 = i + 1;
            for (int j = s2; j < size; j++) {
                if (arr[i] < arr[j]) {
                    int aux = arr[i];
                    arr[i] = arr[j];
                    arr[j] = aux;
                }
            }
        }
    }

    // Print the sorted matrix in row-major order
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if ((i + 1) % cols == 0) {
            printf("\n");
        }
    }
}

int main(void) {
    int dim = 0, matrix[100][100], rows, cols;
    char character;
    readMatrix(matrix, &rows, &cols, &character);
    copyMatrix(matrix, rows, cols, &dim);
    sortMatrix(dim, character, rows, cols);
    return 0;
}