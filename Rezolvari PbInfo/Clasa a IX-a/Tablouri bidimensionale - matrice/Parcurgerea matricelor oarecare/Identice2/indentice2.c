#include<stdio.h>

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j <*cols; j++) {
            scanf("%d", mat[i] + j);
        }
    }
}

void countPairs(int mat[][100], int rows, int cols) {
    int detect, counter = 0;
    for(int i = 0; i < rows - 1; i++) {
        for(int k = i + 1; k < rows; k++) {
            detect = 1;
            for(int j = 0; j < cols; j++) {
                if(mat[i][j] != mat[k][j]) {
                    detect = 0;
                    break;
                }
            }
            if(detect == 1) {
                counter++;
            }
        }
    }
    printf("%d", counter);
}

int main() {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    countPairs(matrix, rows, cols);
    return 0;
}