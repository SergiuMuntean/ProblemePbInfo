#include<stdio.h>

int lines[100];

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int countForRows(int mat[][100], int rows, int cols) {
    int contor = 0, max = 0;
    for(int i = 0; i < rows; i++) {
        contor = 0;
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] % 2 == 0) {
                contor++;
            }
        }
        lines[i] = contor;
        if(contor > max) {
            max = contor;
        }
    }
    return max;
}

void determineMaxRows(int mat[][100], int rows, int cols, int val) {
    for(int i = 0; i < rows; i++) {
        if(lines[i] == val) {
            printf("%d ", i + 1);
        }
    }
}

int main() {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    int value = countForRows(matrix, rows, cols);
    determineMaxRows(matrix, rows, cols, value);
    return 0;
}