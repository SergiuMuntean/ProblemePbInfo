#include<stdio.h>

void readMatrix(int arr[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void calculateSum(int arr[][100], int rows, int cols) {
    int max = 0;
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        max = 0;
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        sum -= max;
        printf("%d ", sum);
    }
}

int main() {
    int matrix[100][100];
    int rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);
    readMatrix(matrix, rows, cols);
    calculateSum(matrix, rows, cols);
    return 0;
}