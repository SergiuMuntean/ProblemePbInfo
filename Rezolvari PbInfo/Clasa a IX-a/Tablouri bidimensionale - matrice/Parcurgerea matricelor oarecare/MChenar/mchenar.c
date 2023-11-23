#include<stdio.h>

int arr[1000000];

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i <* rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void elements(int mat[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        int x = mat[i][0];
        int y = mat[i][cols-1];
        arr[x] = 1;
        arr[y] = 1;
    }
    for(int i = 0; i < cols; i++) {
        int x = mat[0][i];
        int y = mat[rows-1][i];
        arr[x] = 1;
        arr[y] = 1;
    }

    for(int i = 1; i < 1000000; i++) {
        if(arr[i] == 1) {
            printf("%d ", i);
        }
    }
}

int main(void) {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    elements(matrix, rows, cols);
    return 0;
}