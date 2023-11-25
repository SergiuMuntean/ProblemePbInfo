#include <stdio.h>

void readMatrix(int mat[][100], int *rows, int *cols) {
    scanf("%d%d", rows, cols);
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int isEven(int num) {
    return num % 2 == 0;
}

void numsWithEvenNeigh(int mat[][100], int rows, int cols) {
    int contor = 0;

    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < cols - 1; j++) {
            // Check if all neighbors are even
            if (isEven(mat[i - 1][j]) && isEven(mat[i + 1][j]) && isEven(mat[i][j - 1]) && isEven(mat[i][j + 1])) {
                contor++;
            }
        }
    }

    printf("%d", contor);
}

int main() {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    numsWithEvenNeigh(matrix, rows, cols);
    return 0;
}
