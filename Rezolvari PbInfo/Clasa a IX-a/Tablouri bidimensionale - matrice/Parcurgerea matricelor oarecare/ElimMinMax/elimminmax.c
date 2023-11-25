#include<stdio.h>

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void detectLineColumnMax(int mat[][100], int rows, int cols, int* index1, int* index2) {
    int max = 0;
    *index1 = 0;
    *index2 = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] > max) {
                max = mat[i][j];
                *index1 = i;
                *index2 = j;
            }
        }
    }
}

void detectLineColumnMin(int mat[][100], int rows, int cols, int* index3, int* index4) {
    int min = 999999;
    *index3 = 0;
    *index4 = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] < min) {
                min = mat[i][j];
                *index3 = i;
                *index4 = j;
            }
        }
    }
}

void transformMatrix(int mat[][100], int rows, int cols, int index1, int index2, int index3, int index4) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if((i != index1 && i != index3) && (j != index2 && j != index4)) {
                printf("%d ", mat[i][j]);
            }
        }
        if(i != index1 && i != index3) {
            printf("\n");
        }
    }
}

int main() {
    int matrix[100][100], rows, cols;
    int value1, value2, value3, value4;
    readMatrix(matrix, &rows, &cols);
    detectLineColumnMax(matrix, rows, cols, &value1, &value2);
    detectLineColumnMin(matrix, rows, cols, &value3, &value4);
    transformMatrix(matrix, rows, cols, value1, value2, value3, value4);
    return 0;
}