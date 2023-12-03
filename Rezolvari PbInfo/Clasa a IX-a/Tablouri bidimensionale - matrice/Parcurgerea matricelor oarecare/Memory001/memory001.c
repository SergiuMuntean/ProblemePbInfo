#include<stdio.h>
#include<stdlib.h>

int main() {
    int rows, cols;
    long long value = 0;
    FILE *f, *g;
    f = fopen("memory001.in", "r");
    fscanf(f, "%d%d", &rows, &cols);
    long long* sum = calloc(cols, sizeof(long long));

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            fscanf(f, "%d", &value);
            sum[j] += value;
        }
    }
    fclose(f);

    int minSumIndex = 0;
    for(int i = 1; i < cols; i++) {
        if(sum[i] < sum[minSumIndex]) {
            minSumIndex = i;
        }
    }
    
    g = fopen("memory001.out", "w");
    fprintf(g, "%d", minSumIndex + 1);
    fclose(g);
    free(sum);
    return 0;
}