#include<stdio.h>

void readMatrix(int arr[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void permuteColsLeft(int arr[][100], int rows, int cols) {
    int newArr[rows];
    for(int i = 0; i < rows; i++) {
        newArr[i] = arr[i][0];
    }

    for(int j = 0; j < cols - 1; j++) {
        for(int i = 0; i < rows; i++) {
            arr[i][j] = arr[i][j+1];
        }
    }

    for(int i = 0; i < rows; i++) {
        arr[i][cols-1] = newArr[i];
    }
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[100][100], rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);
    readMatrix(matrix, rows, cols);
    permuteColsLeft(matrix, rows, cols);
    return 0;
}