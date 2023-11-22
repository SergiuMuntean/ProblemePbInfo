int arr[1000000];

void readMatrix(int mat[][100], int rows, int cols) {
    int x;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &x);
            if(x < 1000000) {
                arr[x]++;
                mat[i][j] = x;
            }
        }
    }
}

void aparitions(int mat[][100], int rows, int cols) {
    int x, max = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            x = mat[i][j];
            if(arr[x] > max) {
                max = arr[x];
            }
        }
    }
    for(int i = 0; i < 1000000; i++) {
        if(arr[i] == max) {
            printf("%d ", i);
        }
    }
}

int main() {
    int matrix[100][100], rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);
    readMatrix(matrix, rows, cols);
    aparitions(matrix, rows, cols);
    return 0;
}