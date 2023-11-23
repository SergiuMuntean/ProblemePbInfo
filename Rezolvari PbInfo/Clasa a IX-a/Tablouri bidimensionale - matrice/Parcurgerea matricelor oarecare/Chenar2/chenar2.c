#include<stdio.h>

void readMatrix(int mat[][100], int rows, int cols) {  
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

char* verify(int mat[][100], int rows, int cols, int value) {
    for(int i = 0; i < rows; i++) {
        if(mat[i][0] == value) {
            return "DA";
        }
    }
    for(int j = 0; j < cols; j++) {
        if(mat[0][j] == value) {
            return "DA";
        }
    }
    for(int i = 0; i < rows; i++) {
        if(mat[i][cols-1] == value) {
            return "DA";
        }
    }
    for(int j = 0; j < cols; j++) {
        if(mat[rows-1][j] == value) {
            return "DA";
        }
    }
    return "NU";
}

int main() {
    int matrix[100][100], rows, cols, value;
    scanf("%d%d", &rows, &cols);
    readMatrix(matrix, rows, cols);
    scanf("%d", &value);
    char* answer;
    answer = verify(matrix, rows, cols, value);
    printf("%s", answer);
    return 0;
}