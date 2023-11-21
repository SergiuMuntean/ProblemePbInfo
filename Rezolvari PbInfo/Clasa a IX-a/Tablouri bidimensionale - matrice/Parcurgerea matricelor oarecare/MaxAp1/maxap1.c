#include<stdio.h>

int arr[1000000];

void aparitions(int matrix[][100], int rows, int cols) {
    int x, max = 0, max2 = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            x = matrix[i][j];
            arr[x]++;
            if(arr[x] > max) {
                max = arr[x];
                max2 = matrix[i][j];
            }
            else if(arr[x] == max && x > max2) {
                max2 = matrix[i][j];
            }
        }   
    }
    printf("%d", max2);
}

int main() {
    int rows, cols, matrix[100][100];
    scanf("%d", &rows);
    scanf("%d", &cols);
    aparitions(matrix, rows, cols);
    return 0;
}