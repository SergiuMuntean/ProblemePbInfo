#include<stdio.h>

void readMatrix(int mat[][100], int dim) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void calculateSumDiagonals(int mat[][100], int dim) {
    int sum = 0;
    for(int i = 1; i < dim; i++) {
        sum += mat[i][i - 1];
    }
    for(int i = 0; i < dim - 1; i++) {
        sum += mat[i][i + 1];
    }
    printf("%d", sum);
}
int main() {
    int matrix[100][100], dim;
    scanf("%d", &dim);
    readMatrix(matrix, dim);
    calculateSumDiagonals(matrix, dim);
    return 0;
}