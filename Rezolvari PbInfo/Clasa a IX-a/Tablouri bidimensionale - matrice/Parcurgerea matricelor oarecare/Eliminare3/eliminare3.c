#include<stdio.h>

void readMatrix(int mat[][50], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}


void transformMatrix(int mat[][50], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i != rows - 2 && j != cols - 2) {
                printf("%d ", mat[i][j]);
            }
        }
        if(i != rows - 2) {
            printf("\n");
        }
    }
}

int main() {
    int matrix[50][50], rows, cols;
    readMatrix(matrix, &rows, &cols);
    transformMatrix(matrix, rows, cols);
    return 0;
}