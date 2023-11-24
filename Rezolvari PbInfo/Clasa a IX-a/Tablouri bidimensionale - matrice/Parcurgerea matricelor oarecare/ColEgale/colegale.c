#include<stdio.h>

void readMatrix(int mat[][50], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void determineValues(int mat[][50], int rows, int cols) {
    int detect = 0;
    for(int j = 0; j < cols; j++) {
        int isCommon = 1;
        int value = mat[0][j];
        for(int i = 1; i < rows; i++) {
            if(mat[i][j] != value) {
                isCommon = 0;
                break;
            }
        }
        if(isCommon) {
            detect = 1;
            printf("%d ", value);
        }
    }
    if(!detect) {
        printf("nu exista");
    }
}

int main() {
    int matrix[50][50], rows, cols;
    readMatrix(matrix, &rows, &cols);
    determineValues(matrix, rows, cols);
    return 0;
}