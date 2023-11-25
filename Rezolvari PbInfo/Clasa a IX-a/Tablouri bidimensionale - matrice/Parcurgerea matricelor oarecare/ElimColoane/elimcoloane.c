#include<stdio.h>

int arr[100];

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void detectColumns(int mat[][100], int rows, int cols) {
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            if(mat[i][j] == 0) {
                arr[j] = 1;
                break;
            }
        }
    }
}

void transformMatrix(int mat[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[j] == 0) {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    detectColumns(matrix, rows, cols);
    transformMatrix(matrix, rows, cols);
    return 0;
}