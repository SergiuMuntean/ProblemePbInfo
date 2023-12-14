#include<stdio.h>
#include<math.h>

void generateMatrix(int mat[][20], int rows, int cols) {
    int k = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            int x = pow(k, 2);
            printf("%d ", x);
            k += 2;
        }
        printf("\n");
    }
}

int main() {
    int matrix[20][20], rows, cols;
    scanf("%d%d", &rows, &cols);
    generateMatrix(matrix, rows, cols);
    return 0;
}