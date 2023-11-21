#include<stdio.h>

void readMatrix(int arr[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void calculateSum(int arr[], int* indexArr, int matrix[][100], int rows, int cols) {
    int sum;
    for(int i = 0; i < rows; i++) {
        sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        arr[i] = sum;
    }

    for(int i = 0; i < rows; i++) {
        indexArr[i] = i;
    }
    
    int s1 = rows - 1;
    for(int i = 0; i < s1; i++) {
        int s2 = i + 1;
        for(int j = s2; j < rows; j++) {
            if(arr[i] > arr[j]) {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
                int aux2 = indexArr[i];
                indexArr[i] = indexArr[j];
                indexArr[j] = aux2;
            }
        }
    }
    
    int l = 0;
    int k = indexArr[0];
    while(l < rows) {
        k = indexArr[l];
        for(int j = 0; j < cols ; j++) {
            printf("%d ", matrix[k][j]);
        }
        printf("\n");
        l++;
    }
}

int main() {
    int arr[100], indexArr[100], matrix[100][100], rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);
    readMatrix(matrix, rows, cols);
    calculateSum(arr, indexArr, matrix, rows, cols);
    return 0;
}