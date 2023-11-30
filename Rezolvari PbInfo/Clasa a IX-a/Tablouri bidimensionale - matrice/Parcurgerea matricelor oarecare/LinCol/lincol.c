#include<stdio.h>

int sum[10000];

void readArray(FILE* input, int mat[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            fscanf(input, "%d", mat[i] + j);
        }
    }
}

void calculateSum(char question, int value, int mat[][100], int rows, int cols, int* k) {
    if(question == 'C') {
        for(int i = 0; i < rows; i++) {
            sum[*k] += mat[i][value - 1];
        }
        *k = *k + 1;
    }
    else if(question == 'L') {
        for(int j = 0; j < cols; j++) {
            sum[*k] += mat[value - 1][j];
        }
        *k = *k + 1;
    }
}

void printSum(FILE* output, int k) {
    for(int i = 0; i < k; i++) {
        fprintf(output, "%d\n", sum[i]);
    }
}

int main() {
    FILE *f, *g;
    int matrix[100][100], rows, cols, index, k = 0, noQuestions;
    char question;

    f = fopen("lincol.in", "r");
    fscanf(f, "%d%d", &rows, &cols);
    readArray(f, matrix, rows, cols);
    fscanf(f, "%d", &noQuestions);
    for(int i = 0; i < noQuestions; i++) {
        fscanf(f, " %c%d", &question, &index);
        calculateSum(question, index, matrix, rows, cols, &k);
    }
    fclose(f);

    g = fopen("lincol.out", "w");
    printSum(g, k);
    fclose(g);
    return 0;
}