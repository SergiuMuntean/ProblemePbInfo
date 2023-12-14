#include<stdio.h>

void generateMatrix(int mat[][24], int dim) {
    for(int j = 0; j < dim; j++) {
        for(int i = 0; i < dim; i++) {
            mat[i][j] = dim - j;
        }
    }

    for(int i = 0; i < dim; i++) {
        mat[i][i] = 0;
    }

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[24][24], dim;
    scanf("%d", &dim);
    generateMatrix(matrix, dim);
}