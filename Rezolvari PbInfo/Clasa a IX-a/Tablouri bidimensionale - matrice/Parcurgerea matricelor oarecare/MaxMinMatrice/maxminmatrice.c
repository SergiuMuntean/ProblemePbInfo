#include<stdio.h>

int arr[23];

void readMatrix(FILE* input, int mat[][23], int* rows, int* cols) {
    fscanf(input, "%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            fscanf(input, "%d", mat[i] + j);
        }
    }
}

void findMinimums(int mat[][23], int rows, int cols) {
    int min;
    for(int i = 0; i < rows; i++) {
        arr[i] = 1000;
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] < arr[i]) {
                arr[i] = mat[i][j];
            }
        }
    }
}

void findMaximum(FILE* output, int rows) {
    int max = 0;
    for(int i = 0; i < rows; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    fprintf(output, "%d", max);
}

int main() {
    int matrix[23][23], rows, cols;
    FILE *f, *g;
    f = fopen("maxminmatrice.in", "r");
    readMatrix(f, matrix, &rows, &cols);
    fclose(f);
    findMinimums(matrix, rows, cols);
    g = fopen("maxminmatrice.out", "w");
    findMaximum(g, rows);
    return 0;
}