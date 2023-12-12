#include<stdio.h>

void readMatrix(int mat[][20], int* dim) {
    scanf("%d", dim);
    for(int i = 0; i < *dim; i++) {
        for(int j = 0; j < *dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void countElements(int mat[][20], int dim) {
    int count = 0;
    if(dim == 1) {
        printf("1");
        return;
    }
    for(int j = 1; j < dim - 1; j++) {
        int truth = 1;
        if(mat[0][j - 1] > mat[0][j]) {
            truth = 0;
        }
        if(mat[0][j + 1] > mat[0][j]) {
            truth = 0;
        }
        if(mat[1][j] > mat[0][j]) {
            truth = 0;
        }
        if(truth == 1) {
            count++;
        }
    }

    for(int j = 1; j < dim - 1; j++) {
        int truth = 1;
        if(mat[dim - 1][j - 1] > mat[dim - 1][j]) {
            truth = 0;
        }
        if(mat[dim - 1][j + 1] > mat[dim - 1][j]) {
            truth = 0;
        }
        if(mat[dim - 2][j] > mat[dim - 1][j]) {
            truth = 0;
        }
        if(truth == 1) {
            count++;
        }
    }

    for(int i = 1; i < dim - 1; i++) {
        int truth = 1;
        if(mat[i][0] < mat[i][1]) {
            truth = 0;
        }
        if(mat[i][0] < mat[i + 1][0]) {
            truth = 0;
        }
        if(mat[i][0] < mat[i - 1][0]) {
            truth = 0;
        }
        if(truth == 1) {
            count++;
        }
    }

    for(int i = 1; i < dim - 1; i++) {
        int truth = 1;
        if(mat[i][dim - 1] < mat[i][dim - 2]) {
            truth = 0;
        }
        if(mat[i][dim - 1] < mat[i + 1][dim - 1]) {
            truth = 0;
        }
        if(mat[i][dim - 1] < mat[i - 1][dim - 1]) {
            truth = 0;
        }
        if(truth == 1) {
            count++;
        }
    }

    int truth = 1;
    if(mat[0][0] < mat[1][0] || mat[0][0] < mat[0][1]) {
        truth = 0;
    }
    if(truth == 1) {
        count++;
    }

    truth = 1;
    if(mat[0][dim - 1] < mat[1][dim - 1] || mat[0][dim - 1] < mat[dim - 2][1]) {
        truth = 0;
    }
    if(truth == 1) {
        count++;
    }

    truth = 1;
    if(mat[dim - 1][0] < mat[dim - 2][0] || mat[dim - 1][0] < mat[dim - 1][1]) {
        truth = 0;
    }
    if(truth == 1) {
        count++;
    }

    truth = 1;
    if(mat[dim - 1][dim - 1] < mat[dim - 1][dim - 2] || mat[dim - 1][dim - 1] < mat[dim - 2][dim - 1]) {
        truth = 0;
    }
    if(truth == 1) {
        count++;
    }

    for(int i = 1; i < dim - 1; i++) {
        int truth;
        for(int j = 1; j < dim - 1; j++) {
            truth = 1;
            if(mat[i][j] < mat[i][j - 1]) {
                truth = 0;
            }
            if(mat[i][j] < mat[i - 1][j]) {
                truth = 0;
            }
            if(mat[i][j] < mat[i + 1][j]) {
                truth = 0;
            }
            if(mat[i][j] < mat[i][j + 1]) {
                truth = 0;
            }
            if(truth == 1) {
                count++;
            }
        }
    }
    if(dim > 1) {
        printf("%d", count);
    }
}

int main() {
    int matrix[20][20], dim;
    readMatrix(matrix, &dim);
    countElements(matrix, dim);
    return 0;
}