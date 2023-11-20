#include<stdio.h>

void readMatrix(int arr[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void calculateRowsSum(int arr[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        printf("%d ", sum);
    }
}

int main() {
    int matrix[100][100];
    int rows, cols;
    scanf("%d%d",&rows, &cols);
    readMatrix(matrix, rows, cols);
    calculateRowsSum(matrix, rows, cols);
    return 0;
}