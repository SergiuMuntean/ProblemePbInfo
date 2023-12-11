#include<stdio.h>

void readMatrix(int mat[][100], int* dim) {
    scanf("%d", dim);
    for(int i = 0; i < *dim; i++) {
        for(int j = 0; j < *dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void createNewMatrix(int mat[][100], int newMat[][100], int dim) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            newMat[i][j] = mat[dim - 1 - j][dim - 1 - i];
        }
    }

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ", newMat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[100][100], newMatrix[100][100], dim;
    readMatrix(matrix, &dim);
    createNewMatrix(matrix, newMatrix, dim);
    return 0;
}