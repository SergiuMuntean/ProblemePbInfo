#include<stdio.h>

int matrix[600][600];

void readMatrix(int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isPrime(int number) {
    if(number == 0 || number == 1) {
        return 0;
    }
    if(number == 2) {
        return 1;
    }
    if(number % 2 == 0) {
        return 0;
    }
    int contor = 0;
    for(int d = 3; d * d <= number; d += 2) {
        if(number % d == 0) {
            return 0;
        }
    }
    return 1;
}

void countPrimes(int rows, int cols) {
    int contor = 0;
    for(int j = 0; j < cols; j += 2) {
        for(int i = 0; i < rows; i++) {
            if(isPrime(matrix[i][j]) == 1) {
                contor++;
            }
        }
    }
    printf("%d", contor);
}

int main() {
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    readMatrix(rows, cols);
    countPrimes(rows, cols);
    return 0;
}