#include<stdio.h>

int sum[25];

void readMatrix(FILE* input, int mat[][25], int* rows, int* cols) {
    fscanf(input, "%i%i", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            fscanf(input, "%d", &mat[i][j]);
        }
    }
}

void calculateSum(FILE* output, int mat[][25], int rows, int cols) {
    int max = -25000, column = 0;
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            sum[j] += mat[i][j];
        }
        if(sum[j] > max) {
            max = sum[j];
            column = j;
        }
    }

    for(int i = 0; i < rows; i++) {
        fprintf(output, "%d ", mat[i][column]);
    }
}

int main() {
    FILE *f, *g;
    int matrix[25][25], rows, cols;
    f = fopen("sumcolmax.in", "r");
    readMatrix(f, matrix, &rows, &cols);
    fclose(f);
    g = fopen("sumcolmax.out", "w");
    calculateSum(g, matrix, rows, cols);
    fclose(g);
    return 0;
}