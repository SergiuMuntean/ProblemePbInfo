#include<stdio.h>

void readMatrix(FILE* input, int mat[][10], int* rows, int* cols) {
    fscanf(input, "%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            fscanf(input, "%d", &mat[i][j]);
        }
    }
}

void rotateMatrix(FILE* output, int mat[][10], int rows, int cols) {
    for(int j = cols - 1; j >= 0; j--) {
        for(int i = 0; i < rows; i++) {
            fprintf(output, "%d ", mat[i][j]);
        }
        fprintf(output, "\n");
    }
}

int main() {
    int matrix[10][10], rows, cols;
    FILE *f, *g;
    f = fopen("rotire.in", "r");
    readMatrix(f, matrix, &rows, &cols);
    fclose(f);
    g = fopen("rotire.out", "w");
    rotateMatrix(g, matrix, rows, cols);
    fclose(g);
    return 0;
}