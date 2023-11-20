#include<stdio.h>

int arr[100];

int aparitions(FILE* input, FILE* output) {
    int noElements, x;
    fscanf(input, "%d", &noElements);
    for(int i = 0; i < noElements; i++) {
        fscanf(input, "%d", &x);
        if(x < 100) {
            arr[x]++;
        }
    }
    
    for(int i = 0; i < 100; i++) {
        if(arr[i] == 1) {
            fprintf(output, "%i ", i);
        }
    }
}

int main() {
    FILE *f, *g;
    f = fopen("unice.in", "r");
    g = fopen("unice.out", "w");
    aparitions(f, g);
    fclose(f);
    fclose(g);
    return 0;
}