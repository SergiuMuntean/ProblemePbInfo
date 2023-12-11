#include<stdio.h>

void readMatrix(int mat[][20], int dim) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int calculateSumBelowMainDiag(int mat[][20], int dim) {
    int sum = 0;
    for(int i = 1; i < dim; i++) {
        for(int j = 0; j < i; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

int calculateSumAboveMainDiag(int mat[][20], int dim) {
    int sum = 0;
    for(int i = 0; i < dim - 1; i++) {
        for(int j = i + 1; j < dim; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

int gcd(int x, int y) {
    while(y) {
        int rest = x % y;
        x = y;
        y = rest;
    }
    return x;
}

int main(void) {
    int matrix[20][20], dim;
    scanf("%d", &dim);
    readMatrix(matrix, dim);
    int value1 = calculateSumBelowMainDiag(matrix, dim);
    int value2 = calculateSumAboveMainDiag(matrix, dim);
    int result = gcd(value1, value2);
    printf("%d", result);
    return 0;
}