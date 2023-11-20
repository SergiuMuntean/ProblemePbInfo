#include<stdio.h>

void readMatrix(int arr[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int sumMatrix(int arr[][100], int rows, int cols) {
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] % 2 == 0) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int matrix[100][100];
    int rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);
    readMatrix(matrix, rows, cols);
    int value = sumMatrix(matrix, rows, cols);
    printf("%d", value);
    return 0;
}