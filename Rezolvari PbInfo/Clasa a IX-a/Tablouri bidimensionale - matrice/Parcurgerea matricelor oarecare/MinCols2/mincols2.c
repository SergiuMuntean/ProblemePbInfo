#include<stdio.h>

int arr[20];

void readMatrix(int mat[][20], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void findMinimum(int mat[][20], int rows, int cols, int* min) {
    *min = 10000;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] < *min) {
                *min = mat[i][j];
            }
        }
    }
}

void detectColumns(int mat[][20], int rows, int cols, int min) {
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            if(mat[i][j] == min) {
                arr[j] = 1;
            }
        }
    }
}

void transformMatrix(int mat[][20], int rows, int cols, int min) {
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            if(arr[j] == 1) {
                mat[i][j] = min;
            }
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[20][20], rows, cols, minimum;
    readMatrix(matrix, &rows, &cols);
    findMinimum(matrix, rows, cols, &minimum);
    detectColumns(matrix, rows, cols, minimum);
    transformMatrix(matrix, rows, cols, minimum);
    return 0;
}