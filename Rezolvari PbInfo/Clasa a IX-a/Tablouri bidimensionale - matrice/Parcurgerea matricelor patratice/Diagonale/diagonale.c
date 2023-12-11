#include<stdio.h>
#include<math.h>

void readMatrix(int mat[][20], int dim) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int sumMainDiag(int mat[][20], int dim) {
    int sum = 0;
    for(int i = 0; i < dim; i++) {
        sum += mat[i][i];
    }
    return sum;
}

int sumSecondDiag(int mat[][20], int dim) {
    int sum = 0;
    for(int i = 0; i < dim; i++) {
        sum += mat[i][dim - i - 1];
    }
    return sum;
}

int main() {
    int matrix[20][20], dim;
    scanf("%d", &dim);
    readMatrix(matrix, dim);
    int value1 = sumMainDiag(matrix, dim);
    int value2 = sumSecondDiag(matrix, dim);
    int result = abs(value1 - value2);
    printf("%d", result);
    return 0;
}