#include<stdio.h>

void readMatrix(FILE* input, int mat[][100], int* rows, int* cols) {
    fscanf(input, "%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            fscanf(input, "%d", &mat[i][j]);
        }
    }
}

void determineMax(int mat[][100], int rows, int cols, int* max) {
    *max = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] > *max) {
                *max = mat[i][j];
            }
        }
    }
}

void transformMatrix(int mat[][100], int rows, int cols, int max) {
    int min[100];
    for(int j = 0; j < cols; j++) {
        min[j] = 999999999;
        for(int i = 0; i < rows; i++) {
            if(mat[i][j] < min[j]) {
                min[j] = mat[i][j];
            }
        }
    }

    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            if(mat[i][j] == max) {
                mat[i][j] = min[j];
            }
        }
    }
}

void printMatrix(FILE* output, int mat[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            fprintf(output, "%d ", mat[i][j]);
        }
        fprintf(output, "\n");
    }
}

int main() {
    FILE *f, *g;
    int matrix[100][100], rows, cols, maximum;
    f = fopen("matrice7.in", "r");
    readMatrix(f, matrix, &rows, &cols);
    fclose(f);
    determineMax(matrix, rows, cols, &maximum);
    transformMatrix(matrix, rows, cols, maximum);
    g = fopen("matrice7.out", "w");
    printMatrix(g, matrix, rows, cols);
    fclose(g);
    return 0;
}