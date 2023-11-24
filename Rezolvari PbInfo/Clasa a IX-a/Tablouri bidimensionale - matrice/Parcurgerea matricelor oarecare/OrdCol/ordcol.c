#include<stdio.h>

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void sortLine(int mat[][100], int rows, int cols) {
    int s1 = cols - 1;
    for(int i = 0; i < s1; i++) {
        int s2 = i + 1;
        for(int j = s2; j < cols; j++) {
            if(mat[0][i] > mat[0][j]) {
                for(int k = 0; k < rows; k++) {
                    int aux = mat[k][i];
                    mat[k][i] = mat[k][j];
                    mat[k][j] = aux;
                }
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
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    sortLine(matrix, rows, cols);
    return 0;
}