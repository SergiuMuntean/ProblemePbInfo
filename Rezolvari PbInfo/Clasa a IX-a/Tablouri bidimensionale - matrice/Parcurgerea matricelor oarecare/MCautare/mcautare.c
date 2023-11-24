#include<stdio.h>

void readMatrix(int mat[][100], int* rows, int* cols) {
    scanf("%d%d", rows, cols);
    for(int i = 0; i < *rows; i++) {
        for(int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void readArray(int arr[], int* size) {
    scanf("%d", size);
    for(int i = 0; i < *size; i++) {
        scanf("%d", arr+i);
    }
}

void detectValues(int mat[][100], int rows, int cols, int* arr, int size) {
    for(int k = 0; k < size; k++) {
        int contor = 0;
        int detect = 0;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(mat[i][j] == arr[k]) {
                    contor++;
                    break;
                }
            }
            if(contor == rows) {
                detect = 1;
                break;
            }
        }
        if(detect == 1) {
            printf("DA\n");
        }
        else {
            printf("NU\n");
        }
    }
}

int main() {
    int matrix[100][100], rows, cols;
    int array[1000], size;
    readMatrix(matrix, &rows, &cols);
    readArray(array, &size);
    detectValues(matrix, rows, cols, array, size);
    return 0;
}