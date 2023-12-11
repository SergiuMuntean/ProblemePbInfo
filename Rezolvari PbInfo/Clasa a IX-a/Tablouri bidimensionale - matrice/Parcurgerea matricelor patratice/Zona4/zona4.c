#include<stdio.h>

void readMatrix(int mat[][200], int* dim, int* zone) {
    scanf("%d%d", dim, zone);
    for(int i = 0; i < *dim; i++) {
        for(int j = 0; j < *dim; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void calculateSum(int mat[][200], int dim, int zone) {
    int sum = 0;
    if(zone == 1) {
        for(int i = 0; i < dim; i++) {
            for(int j = 0; j < dim; j++) {
                if(i < j && j < dim - 1 - i) {
                    sum += mat[i][j];
                }
            }
        }
    }

    if(zone == 2) {
        for(int i = 0; i < dim; i++) {
            for(int j = 0; j < dim ; j++) {
                if(i < j && j > dim - 1 - i) {
                    sum += mat[i][j];
                }
            }
        }
    }


    if(zone == 3) {
        for(int i = 0; i < dim; i++) {
            for(int j = 0; j < dim ; j++) {
                if(i > j && j > dim - 1 - i) {
                    sum += mat[i][j];
                }
            }
        }
    }

    if(zone == 4) {
        for(int i = 0; i < dim; i++) {
            for(int j = 0; j < dim ; j++) {
                if(i > j && j < dim - 1 - i) {
                    sum += mat[i][j];
                }
            }
        }
    }
    printf("%d", sum);
}

int main() {
    int matrix[200][200], dim, zone;
    readMatrix(matrix, &dim, &zone);
    calculateSum(matrix, dim, zone);
    return 0;
}