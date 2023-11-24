#include <stdio.h>

void readMatrix(float mat[][50], int* elements) {
    scanf("%d", elements);
    for (int i = 0; i < *elements; i++) {
        for (int j = 0; j < *elements; j++) {
            scanf("%f", &mat[i][j]);
        }
    }
}

void calculateNewElements(float mat[][50], float* arr, int elements) {
    for (int j = 0; j < elements; j++) {
        float sum = 0;
        for (int i = 0; i < elements; i++) {
            sum += mat[i][j];
        }
        sum /= (float)elements;
        arr[j] = sum;
    }
}

void transformMatrix(float mat[][50], float* arr, int elements) {
    for (int i = elements; i > elements / 2; i--) {
        for (int j = 0; j < elements; j++) {
            mat[i][j] = mat[i - 1][j];
        }
    }
    for (int j = 0; j < elements; j++) {
        mat[elements / 2][j] = arr[j];
    }

    for (int i = 0; i < elements + 1; i++) {
        for (int j = 0; j < elements; j++) {
            printf("%.3f ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matrix[50][50], arr[50];
    int elements;
    readMatrix(matrix, &elements);
    calculateNewElements(matrix, arr, elements);
    transformMatrix(matrix, arr, elements);
    return 0;
}
