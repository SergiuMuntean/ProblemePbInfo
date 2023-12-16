#include<stdio.h>

void generateMatrix(int mat[][15], int dim) {
    for(int i = 0; i < dim; i++) {
        mat[i][0] = i + 2;
        mat[i][dim - 1] = i + dim + 1;
    }
    for(int j = 0; j < dim; j++) {
        mat[0][j] = j + 2;
        mat[dim - 1][j] = j + dim + 1;
    }

    for(int i = 1; i < dim - 1; i++) {
        for(int j = 1; j < dim - 1; j++) {
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j] + mat[i - 1][j + 1];
        }
    }

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[15][15], dim;
    scanf("%d", &dim);
    generateMatrix(matrix, dim);
    return 0;
}