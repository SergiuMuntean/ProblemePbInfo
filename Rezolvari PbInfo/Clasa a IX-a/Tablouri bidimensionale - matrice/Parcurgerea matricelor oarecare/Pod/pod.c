#include<stdio.h>
#include<stdlib.h>

int arr[1000];
int matrix[1000][1000];

void readMatrix(int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", matrix[i] + j);
        }
    }
}

void calculateMinimum(int rows, int cols) {
    for(int j = 0; j < cols; j++) {
        arr[j] = 10000;
        for(int i = 0; i < rows; i++) {
            if(matrix[i][j] < arr[j]) {
                arr[j] = matrix[i][j];
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < cols; i++) {
        sum += arr[i];
    }

    printf("%d", sum);
}

int main(void) {
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    readMatrix(rows, cols);
    calculateMinimum(rows, cols);
    return 0;
}