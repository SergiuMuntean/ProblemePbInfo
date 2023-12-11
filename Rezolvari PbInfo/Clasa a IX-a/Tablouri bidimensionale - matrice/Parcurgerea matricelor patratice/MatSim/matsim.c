#include<stdio.h>

void readMatrix(int mat[][100], int dim) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void createSimMat(int mat[][100], int newmat[][100], int dim) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            newmat[i][j] = mat[j][i];
        }
    }

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ", newmat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[100][100], newMatrix[100][100], dim;
    scanf("%d", &dim);
    readMatrix(matrix, dim);
    createSimMat(matrix, newMatrix, dim);
}