#include<stdio.h>

int arr[100];

void readMatrix(FILE* input, int mat[][100], int* dim) {
    fscanf(input, "%d", dim);
    for(int i = 0; i < *dim; i++) {
        for(int j = 0; j < *dim; j++) {
            fscanf(input, "%d", mat[i] + j);
        }
    }
}

void calculateMin(int mat[][100], int dim, int* min) {
    *min = 1000000000;
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(mat[i][j] < *min) {
                *min = mat[i][j];
            }
        }
    }
}

void calculateMax(int mat[][100], int dim, int* max) {
    *max = 0;
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(mat[i][j] > *max) {
                *max = mat[i][j];
            }
        }
    }
}

void detectLines(int mat[][100], int dim, int max) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(mat[i][j] == max) {
                arr[i] = 1;
                break;
            }
        }
    }
}

void transformMatrix(FILE* output, int mat[][100], int dim, int min) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(arr[i] == 1) {
                mat[i][j] += min;
            }
        }
    }

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            fprintf(output, "%d ", mat[i][j]);
        }
        fprintf(output, "\n");
    }
}

int main() {
    FILE *f, *g;
    int matrix[100][100], dim, min, max;
    f = fopen("matrice6.in", "r");
    readMatrix(f, matrix, &dim);
    fclose(f);
    calculateMin(matrix, dim, &min);
    calculateMax(matrix, dim, &max);
    detectLines(matrix, dim, max);
    g = fopen("matrice6.out", "w");
    transformMatrix(g, matrix, dim, min);
    fclose(g);
    return 0;
}