#include<stdio.h>

int arr[10000];

void readMatrix(int mat[][100], int* rows, int* cols, char* chr) {
    scanf("%d%d %c", rows, cols, chr);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++)  {
            scanf("%d", mat[i] + j);
        }
    }
}

void copyMatrix(int mat[][100], int rows, int cols, int* size) {
    int k = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            arr[k++] = mat[i][j];
        }
    }
    *size = k;
}

void sortMatrix(int size, char chr) {
    int s1 = size - 1;
    if(chr == '+') {
        for(int i = 0; i < s1 ; i++) {
            int s2 = i + 1;
            for(int j = s2; j < size; j++) {
                if(arr[i] > arr[j]) {
                    int aux = arr[i];
                    arr[i] = arr[j];
                    arr[j] = aux;
                }
            }
        }
    }
    else {
        for(int i = 0; i < s1 ; i++) {
            int s2 = i + 1;
            for(int j = s2; j < size; j++) {
                if(arr[i] < arr[j]) {
                    int aux = arr[i];
                    arr[i] = arr[j];
                    arr[j] = aux;
                }
            }
        }
    }
}

void printMatrix(int mat[][100], int rows, int cols) {
    int k = 0;
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            mat[i][j] = arr[k++];
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[100][100], rows, cols, size;
    char character;
    readMatrix(matrix, &rows, &cols, &character);
    copyMatrix(matrix, rows, cols, &size);
    sortMatrix(size, character);
    printMatrix(matrix, rows, cols);
    return 0;
}