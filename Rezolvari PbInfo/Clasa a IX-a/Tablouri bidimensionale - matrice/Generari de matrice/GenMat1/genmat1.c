#include<stdio.h>

void generateMatrix(int mat[][20], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i < j) {
                mat[i][j] = i + 1;
            }
            else {
                mat[i][j] = j + 1;
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
    int matrix[20][20], rows, cols;
    scanf("%d%d", &rows, &cols);
    generateMatrix(matrix, rows, cols);
}