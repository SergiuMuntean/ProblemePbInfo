#include<stdio.h>

void readMatrix(int arr[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int isPrime(int number) {
    int contor = 0;
    for(int d = 1; d * d <= number; d++) {
        if(number % d == 0) {
            contor += 2;
        }
        if(d *d == number) {
            contor--;
        }
    }
    if(contor == 2) {
        return 1;
    }
    return 0;
}

void countPrimes(int arr[][100], int rows, int cols) {
    int contor = 0;
    for(int i = 1; i < rows; i = i + 2) {
        for(int j = 0; j < cols; j++) {
            if(isPrime(arr[i][j]) == 1) {
                contor++;
            }
        }
    }
    printf("%d", contor);
}

int main() {
    int rows, cols, matrix[100][100];
    scanf("%d", &rows);
    scanf("%d", &cols);
    readMatrix(matrix, rows, cols);
    countPrimes(matrix, rows, cols);
    return 0;
}