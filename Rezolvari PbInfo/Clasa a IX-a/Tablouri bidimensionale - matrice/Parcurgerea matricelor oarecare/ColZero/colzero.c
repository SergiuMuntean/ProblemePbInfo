#include<stdio.h>

void readMatrix(FILE* input, int mat[][10], int* rows, int* cols) {
    fscanf(input, "%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            fscanf(input, "%d", mat[i] + j);
        }
    }
}

void countColumns(FILE* output, int mat[][10], int rows, int cols) {
    int count = 0;
    for(int j = 0; j < cols; j++) {
        int truth = 1;
        for(int i = 0; i < rows; i++) {
            if(mat[i][j] != 0) {
                truth = 0;
                break;
            }
        }
        if(truth == 1) {
            count++;
        }
    }
    fprintf(output, "%d", count);
}

int main() {
    FILE *f, *g;
    int matrix[10][10], rows, cols;
    f = fopen("colzero.in", "r");
    readMatrix(f, matrix, &rows, &cols);
    fclose(f);
    g = fopen("colzero.out", "w");
    countColumns(g, matrix, rows, cols);
    fclose(g);
    return 0;
}