#include<stdio.h>

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", mat[i] + j);
        }
    }
}

void sortMatrix(int mat[][100], int rows, int cols) {
    //sort the matrix
    for(int i = 0; i < rows; i++) {
        int s1 = cols - 1;
        for(int j = 0; j < s1; j++) {
            int s2 = j + 1;
            for(int k = s2; k < cols; k++) {
                if(mat[i][j] > mat[i][k]) {
                    int aux = mat[i][j];
                    mat[i][j] = mat[i][k];
                    mat[i][k] = aux;
                }
            }
        }
    }

    //print the matrix
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
    sortMatrix(matrix, rows, cols);
    return 0;
}