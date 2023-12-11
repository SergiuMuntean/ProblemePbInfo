#include<stdio.h>

void readMatrix(int mat[][100], int* dim) {
    scanf("%d", dim);
    for(int i = 0; i < *dim; i++) {
        for(int j = 0; j < *dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void calculateSums(int mat[][100], int dim, int N, int E, int S, int V, int arr[]) {
    N = 0;
    E = 0;
    S = 0;
    V = 0;
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(i < j && j < dim - 1 - i) {
                N += mat[i][j];
            }
            if(i < j && j > dim - 1 - i) {
                E += mat[i][j];
            }
            if(i > j && j > dim - 1 -i) {
                S += mat[i][j];
            }
            if(i > j && j < dim - 1 - i) {
                V += mat[i][j];
            }
        }
    }
    arr[0] = N;
    arr[1] = E;
    arr[2] = S;
    arr[3] = V;
}

void sortNumbers(int* arr) {
    for(int i = 0; i < 3; i++) {
        int s2 = i + 1;
        for(int j = s2; j < 4; j++) {
            if(arr[i] > arr[j]) {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    for(int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int matrix[100][100], dim, N, E, S, V, arr[4];
    readMatrix(matrix, &dim);
    calculateSums(matrix, dim, N, E, S, V, arr);
    sortNumbers(arr);
    return 0;
}