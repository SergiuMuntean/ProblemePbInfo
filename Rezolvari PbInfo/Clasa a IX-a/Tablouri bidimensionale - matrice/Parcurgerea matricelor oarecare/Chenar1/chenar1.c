#include<stdio.h>

void readMatrix(int mat[][50], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void modifyMatrix(int mat[][50], int rows, int cols) {
    int value = mat[rows-1][cols-1];
    for(int i = 0; i < rows; i++) {
        mat[i][0] = value;
        mat[i][cols-1] = value;
    }
    for(int i = 0; i < cols; i++) {
        mat[0][i] = value;
        mat[rows-1][i] = value;
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[50][50], rows, cols;
    readMatrix(matrix, &rows, &cols);
    modifyMatrix(matrix, rows, cols);
    return 0;
}