#include<stdio.h>

int arr[1000000];

void readMatrix(int mat[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void countCols(int mat[][100], int rows, int cols) {
    int columns = 0;
    for(int j = 0; j < cols; j++) {
        int detect = 1;
        for(int i = 0; i < rows; i++) {
            int x = mat[i][j];
            arr[x]++;
            if(arr[x] >= 2) {
                detect = 0;
                break;
            }
        }
        if(detect) {
            columns++;
        }
    }
    printf("%d", columns);
}

int main() {
    int matrix[100][100], rows, cols;
    scanf("%d%d", &rows, &cols);
    readMatrix(matrix, rows, cols);
    countCols(matrix, rows, cols);
    return 0;
}