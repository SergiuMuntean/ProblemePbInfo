#include<stdio.h>

void readMatrix(int mat[][21], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
 }

 void checkSymmetry(int mat[][21], int rows, int cols) {
    int truth = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols / 2; j++) {
            if(mat[i][j] != mat[i][cols - j - 1]) {
                truth = 0;
                break;
            }
        }
        if(truth == 0) {
            break;
        }
    }
    if(truth == 1) {
        printf("DA");
    }
    else {
        printf("NU");
    }
 }

int main(void) {
    int matrix[21][21], rows, cols;
    readMatrix(matrix, &rows, &cols);
    checkSymmetry(matrix, rows, cols);
    return 0;
}