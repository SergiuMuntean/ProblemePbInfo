#include<stdio.h>

int arr[10000];

int main() {
    FILE *f, *g;
    f = fopen("numere8.in", "r");
    int x;

    while(fscanf(f, "%d", &x) != EOF) {
        if(x <= 9999) {
            arr[x] = 1;
        }
    }

    fclose(f);

    g = fopen("numere8.out", "w");

    for(int i = 9999; i >= 1; i--) {
        if(arr[i] == 0) {
            fprintf(g, "%d ", i);
        }
    }
    
    fclose(g);

    return 0;
}