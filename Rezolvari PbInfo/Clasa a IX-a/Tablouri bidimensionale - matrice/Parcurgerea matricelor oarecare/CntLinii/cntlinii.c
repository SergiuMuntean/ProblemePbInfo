#include<stdio.h>

void readMatrix(int mat[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void equalElements(int mat[][100], int rows, int cols) {
    int equals = 0;
    for(int i = 0; i < rows; i++) {
        int pass = 1;
        for(int j = 0; j < cols - 1; j++) {
            if(mat[i][j] != mat[i][j+1]) {
                pass = 0;
                break;
            }
        }
        if(pass) {
            equals++;
        }
    }
    printf("%d", equals);
}

int main() {
    int matrix[100][100], rows, cols;
    scanf("%d%d", &rows, &cols);
    readMatrix(matrix, rows, cols);
    equalElements(matrix, rows, cols);
    return 0;
}