#include<stdio.h>

int arr[9];

int countDigits(int number) {
    int i = 0;
    while(number) {
        arr[i++] = number % 10;
        number /= 10;
    }
    return i;
}

void generateMatrix(int mat[][9], int dim) {
    for(int j = 0; j < dim; j++) {
        for(int i = 0; i < dim; i++) {
            mat[i][j] = arr[j];
        }
    }

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[9][9], number;
    scanf("%d", &number);
    int dim = countDigits(number);
    generateMatrix(matrix, dim);
    return 0;
}