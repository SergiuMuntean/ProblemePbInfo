#include<stdio.h>

int arr[10000];

void readMatrix(int mat[][50], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void determineValues(int mat[][50], int rows, int cols) {
    int detect, x;
    int i = 1;
    int contor = 0;
    for(int j = 0; j < cols; j++) {
        detect = 1;
        x = mat[0][j];
        for(i = 1; i < rows; i++) {
            if(mat[i-1][j] != mat[i][j]) {
                detect = 0;
                break;
            }
        }
        if(detect == 1) {
            arr[x]++;
            contor = 1;
        }
    }
    if(contor == 1) {
        for(int k = 0; k < 10000; k++) {
            if(arr[k] >= 1) {
                for(int x = 0; x < arr[k]; x++) {
                    printf("%d ", k);
                }
            }
        }
    }

    else {
        printf("nu exista");
    }
}

int main() {
    int matrix[50][50], rows, cols;
    readMatrix(matrix, &rows, &cols);
    determineValues(matrix, rows, cols);
    return 0;
}