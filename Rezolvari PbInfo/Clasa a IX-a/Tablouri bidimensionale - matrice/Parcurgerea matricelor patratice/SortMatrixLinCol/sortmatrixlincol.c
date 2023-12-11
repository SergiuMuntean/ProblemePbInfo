#include<stdio.h>

void readMatrix(int mat[][100], int* dim) {
    scanf("%d", dim);
    for(int i = 0; i < *dim; i++) {
        for(int j = 0; j < *dim; j++) {
            scanf("%d", mat[i] + j);
        }
    }
}

void sortLinesAndCols(int mat[][100], int dim) {
    int s1 = dim - 1;
    for(int k = 0; k < dim; k++) {
        for(int i = 0; i < s1; i++) {
            int s2 = i + 1;
            for(int j = s2; j < dim; j++) {
                if(mat[k][i] > mat[k][j]) {
                    int aux = mat[k][i];
                    mat[k][i] = mat[k][j];
                    mat[k][j] = aux;
                }
            }
        }
    }

    for(int i = 0; i < dim; i++) {
        int s1 = dim - 1;
        for(int j = 0; j < s1; j++) {
            int s2 = j + 1;
            for(int k = s2; k < dim; k++) {
                if(mat[j][i] > mat[k][i]) {
                    int aux = mat[j][i];
                    mat[j][i] = mat[k][i];
                    mat[k][i] = aux;
                }
            }
        }
    }

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int matrix[100][100], dim;
    readMatrix(matrix, &dim);
    sortLinesAndCols(matrix, dim);
    return 0;
}