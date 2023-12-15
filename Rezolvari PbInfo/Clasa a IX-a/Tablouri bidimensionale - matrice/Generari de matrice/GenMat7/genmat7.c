#include<stdio.h>

void generateMatrix(int mat[][24], int dim) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(i < j && j < dim - i - 1) {
                mat[i][j] = 1;
            }
            else if(i > j && j > dim - i - 1) {
                mat[i][j] = 2;
            }
            else if(i == j || j == dim - i - 1) {
                mat[i][j] = 0;
            }
            else {
                mat[i][j] = 3;
            }
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
    int dim, matrix[24][24];
    scanf("%d", &dim);
    generateMatrix(matrix, dim);
    return 0;
}