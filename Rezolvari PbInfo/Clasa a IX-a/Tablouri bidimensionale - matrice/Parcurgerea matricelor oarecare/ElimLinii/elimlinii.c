#include<stdio.h>

int arr[100];

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int isPrime(int number) {
    int contor = 0;
    for(int d = 1; d * d <= number; d++) {
        if(number % d == 0) {
            contor +=2 ;
        }
        if(d * d == number) {
            contor--;
        }
    }
    if(contor == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

void detectBadLines(int mat[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        if(isPrime(mat[i][0])) {
            arr[i] = 1;
        }
    }
}

void transformMatrix(int mat[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i] == 0) {
                printf("%d ", mat[i][j]);
            }
        }
        if(arr[i] == 0) {
            printf("\n");
        }
    }
}

int main() {
    int matrix[100][100], rows, cols;
    readMatrix(matrix, &rows, &cols);
    detectBadLines(matrix, rows, cols);
    transformMatrix(matrix, rows, cols);
    return 0;
}