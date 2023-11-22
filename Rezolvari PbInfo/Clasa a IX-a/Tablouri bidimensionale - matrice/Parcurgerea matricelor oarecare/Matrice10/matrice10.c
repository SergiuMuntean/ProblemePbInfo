#include<stdio.h>

void readMatrix(int mat[][50], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void findMin(int mat[][50], int rows, int cols) {
    int min = 10000;
    int minColOne = 0;
    int finMin = 10000;
    int finColMin = 0;
    for(int i = 0; i < rows; i++) {
        if(mat[i][0] < min) {
            min = mat[i][0];
            minColOne = i;
        }
    }

    for(int i = 0; i < rows; i++) {
        if(mat[i][cols-1] < finMin) {
            finMin = mat[i][cols-1];
            finColMin = i;
        }
    }

    int aux = mat[minColOne][0];
    mat[minColOne][0] = mat[finColMin][cols-1];
    mat[finColMin][cols-1] = aux;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[50][50], rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);
    readMatrix(matrix, rows, cols);
    findMin(matrix, rows, cols);
    return 0;
}