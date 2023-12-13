#include<stdio.h>

int min[30];

void readMatrix(FILE* input, int mat[][30], int* dim) {
    fscanf(input, "%d", dim);
    for(int i = 0; i < *dim; i++) {
        for(int j = 0; j < *dim; j++) {
            fscanf(input, "%d", &mat[i][j]);
        }
    }
}

void findMinimums(int mat[][30], int dim) {
    for(int j = 0; j < dim; j++) {
        min[j] = 99;
        for(int i = 0; i < dim; i++) {
            if(mat[i][j] < min[j]) {
                min[j] = mat[i][j];
            }
        }
    }
}

int calculateProduct(int mat[][30], int dim, int* detect) {
    int product = 1;
    *detect = 0;
    for(int i = 0; i < dim; i++) {
        if(mat[i][dim - i - 1] == min[dim - i - 1]) {
            product *= mat[i][dim - i - 1];
            *detect = 1;
        }
    }
    return product;
}

void lastDigit(FILE* output, int number, int detect) {
    int digit = number % 10;
    if(detect == 0) {
        fprintf(output, "NU EXISTA");
        return;
    }
    if(detect == 1) {
        fprintf(output, "%d", digit);
    }
}

int main() {
    FILE *f, *g;
    int matrix[30][30], dim, detect;
    f = fopen("mincols1.in", "r");
    readMatrix(f, matrix, &dim);
    fclose(f);
    findMinimums(matrix, dim);
    int value = calculateProduct(matrix, dim, &detect);
    g = fopen("mincols1.out", "w");
    lastDigit(g, value, detect);
    fclose(g);
    return 0;
}