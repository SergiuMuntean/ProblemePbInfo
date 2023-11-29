#include<stdio.h>

int arr[25];
int index[25];

void readMatrix(FILE* input, int mat[][25], int* rows, int* cols) {
    fscanf(input, "%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            fscanf(input, "%d", mat[i] + j);
        }
    }
}

void maximums(FILE* output, int mat[][25], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        arr[i] = -1000;
        index[i] = 0;
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] > arr[i]) {
                arr[i] = mat[i][j];
                index[i] = j + 1;
            }
        }
    }

    for(int i = 0; i < rows; i++) {
        fprintf(output, "%d %d\n", arr[i], index[i]);
    }
}

int main() {
    int matrix[25][25], rows, cols;
    FILE *f, *g;
    f = fopen("maxmat.in", "r");
    readMatrix(f, matrix, &rows, &cols);
    fclose(f);
    g = fopen("maxmat.out", "w");
    maximums(g, matrix, rows, cols);
    fclose(g);
    return 0;
}