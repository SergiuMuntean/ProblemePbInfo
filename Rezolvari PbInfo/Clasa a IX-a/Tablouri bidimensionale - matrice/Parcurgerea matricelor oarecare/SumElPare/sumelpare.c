#include<stdio.h>

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void determineRow(int mat[][100], int rows, int cols) {
    int sum = 0, max = 0, index = 0;
    for(int i = 0; i < rows; i++) {
        sum = 0;
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] % 2 == 0) {
                sum += mat[i][j];
            }
        }
        if(sum > max) {
            max = sum;
            index = i;
        }
    }
    printf("%d", index + 1);
}

int main() {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    determineRow(matrix, rows, cols);
    return 0;
}