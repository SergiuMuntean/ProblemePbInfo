#include<stdio.h>

int arr[1000000];

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void checker(int mat[][100], int rows, int cols) {
    int x, max = 0, value = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            x = mat[i][j];
            arr[x]++;
            if(x > max && arr[x] >= 2) {
                max = x;
                value = arr[x];
            }
        }
    }

    if(value >= 2) {
        printf("%d", max);
    }
    else {
        printf("IMPOSIBIL");
    }
}

int main() {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    checker(matrix, rows, cols);
    return 0;
}