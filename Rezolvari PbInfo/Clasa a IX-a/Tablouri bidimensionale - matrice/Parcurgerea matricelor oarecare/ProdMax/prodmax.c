#include<stdio.h>

int aparitions2[100];

void readMatrix(FILE* input, long long mat[][100], int* rows, int* cols) {
    fscanf(input, "%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            fscanf(input, "%lld", mat[i] + j);
        }
    }
}

void aparitions(FILE* output, long long mat[][100], int rows, int cols) {
    int max = 0;
    for(int j = 0; j < cols; j++) {
        aparitions2[j] = 0;
        for(int i = 0; i < rows; i++) {
            if(mat[i][j] == 2) {
                aparitions2[j]++;
            }
        }
        if(aparitions2[j] > max) {
            max = aparitions2[j];
        }
    }
    for(int j = 0; j < cols; j++) {
        if(aparitions2[j] == max) {
            fprintf(output, "%d ", j + 1);
        }
    }
}

int main() {
    FILE* f, *g;
    long long matrix[100][100];
    int rows, cols;
    f = fopen("prodmax.in", "r");
    readMatrix(f, matrix, &rows, &cols);
    fclose(f);
    g = fopen("prodmax.out", "w");
    aparitions(g, matrix, rows, cols);
    fclose(g);
    return 0;
}