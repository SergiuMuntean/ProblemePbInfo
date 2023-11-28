#include<stdio.h>

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", mat[i] + j);
        }
    }
}

void countLines(int mat[][100], int rows, int cols) {
    int detect, k, count = 0;
    for(int i = 0; i < rows - 1; i++) {
        detect = 1;
        k = i + 1;
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] != mat[k][j]) {
                detect = 0;
                break;
            }
        }
        if(detect == 1) {
            count++;
        }
    }

    printf("%d", count);
}

int main(void) {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    countLines(matrix, rows, cols);
    return 0;
}