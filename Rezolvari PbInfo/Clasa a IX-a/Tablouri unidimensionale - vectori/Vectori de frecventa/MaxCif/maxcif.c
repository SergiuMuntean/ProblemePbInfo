#include<stdio.h>

int arr[10];

void aparitions(FILE* input, FILE* output) {
    int x;
    int max = 0;
    while(fscanf(input, "%d", &x) != EOF) {
        if(x < 10) {
            arr[x]++;
        }
        if(arr[x] > max) {
            max = arr[x];
        }
    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] == max) {
            fprintf(output, "%d ", i);
        }
    }
}

int main() {
    FILE *f, *g;
    f = fopen("maxcif.in", "r");
    g = fopen("maxcif.out", "w");
    aparitions(f, g);
    fclose(f);
    fclose(g);
    return 0;
}