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
    //sort matrix
    for(int i = 0; i < cols; i++) {
        int s1 = rows - 1;
        for(int j = 0; j < s1; j++) {
            int s2 = j + 1;
            for(int k = s2; k < rows; k++) {
                if(mat[j][i] < mat[k][i]) {
                    int aux = mat[j][i];
                    mat[j][i] = mat[k][i];
                    mat[k][i] = aux;
                }
            }
        }
    }

    //print matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    sortMatrix(matrix, rows, cols);
    return 0;
}