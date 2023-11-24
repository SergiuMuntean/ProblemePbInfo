#include<stdio.h>

int arr[10000];

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void calculateSum(int mat[][100], int rows, int cols) {
    int x;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            x = mat[i][j];
            if(x % 2 == 0) {
                arr[x] = 1;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i <= 10000; i++) {
        if(arr[i] == 1) {
            sum += i;
        }
    }
    printf("%d", sum);
}

int main() {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    calculateSum(matrix, rows, cols);
    return 0;
}