#include<stdio.h>

int arr[5];

void extractDigits(int number) {
    int i = 0;
    while(number) {
        arr[i++] = number % 10;
        number /= 10;
    }
}

void generateMatrix(int mat[][6]) {
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 6; j++) {
            mat[i][j] = arr[i];
        }
    }

    for(int i = 0; i < 6; i++) {
        mat[i][i] = 0;
    }

    for(int j = 0; j < 5; j++) {
        for(int i = j + 1; i < 6; i++) {
            mat[i][j] = arr[j];
        }
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[6][6], number;
    scanf("%d", &number);
    extractDigits(number);
    generateMatrix(matrix);
}