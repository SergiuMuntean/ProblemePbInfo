#include<stdio.h>

void readMatrix(FILE* input, int mat[][25], int* rows, int* cols) {
    fscanf(input, "%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            fscanf(input, "%d", mat[i] + j);
        }
    }
}

void findMaximumIndex(int mat[][25], int rows, int cols, int* index) {
    int max = -1;
    *index = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] > max) {
                max = mat[i][j];
                *index = i;
            }
        }
    }
}

void findMinimumIndex(int mat[][25], int rows, int cols, int* index) {
    int min = 10000;
    *index = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] < min) {
                min = mat[i][j];
                *index = i;
            }
        }
    }
}

void interchangeLines(FILE* output, int mat[][25], int rows, int cols, int maxIndex, int minIndex) {
    for(int j = 0; j < cols; j++) {
        int aux = mat[maxIndex][j];
        mat[maxIndex][j] = mat[minIndex][j];
        mat[minIndex][j] = aux;
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            fprintf(output, "%d ", mat[i][j]);
        }
        fprintf(output, "\n");
    }
}

int main() {
    int matrix[25][25], rows, cols, minIndex, maxIndex;
    FILE *f, *g;
    f = fopen("interschimbarelinii.in", "r");
    readMatrix(f, matrix, &rows, &cols);
    fclose(f);
    findMaximumIndex(matrix, rows, cols, &maxIndex);
    findMinimumIndex(matrix, rows, cols, &minIndex);
    g = fopen("interschimbarelinii.out", "w");
    interchangeLines(g, matrix, rows, cols, maxIndex, minIndex);
    fclose(g);
    return 0;
}