#include<stdio.h>

int arr[1000];

void readMatrix(int mat[][200], int* dim) {
    scanf("%d", dim);
    for(int i = 0; i < *dim; i++) {
        for(int j = 0; j < *dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void numbers(int mat[][200], int dim) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(i > j && j < dim - i - 1) {
                int x = mat[i][j];
                arr[x] = 1;
            }
        }
    }

    for(int i = 0; i < 1000; i++) {
        if(arr[i] == 1) {
            printf("%d ", i);
        }
    }
}

int main() {
    int matrix[200][200], dim;
    readMatrix(matrix, &dim);
    numbers(matrix, dim);
    return 0;
}