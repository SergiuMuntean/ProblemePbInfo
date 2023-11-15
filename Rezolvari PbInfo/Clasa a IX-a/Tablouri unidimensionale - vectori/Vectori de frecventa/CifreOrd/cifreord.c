#include<stdio.h>

int arr[10];

void aparitions(FILE* input, FILE* output) {
    int size, x;
    fscanf(input, "%d", &size);
    for(int i = 0; i < size; i++) {
        fscanf(input, "%d", &x);
        if(x < 10) {
            arr[x]++;
        }
    }

    int contor = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < arr[i]; j++) {
            fprintf(output, "%d ", i);
            contor++;
            if(contor % 20 == 0) {
                fprintf(output, "\n");
            }
        }
    }
}

int main() {
    FILE *f, *g;
    f = fopen("cifreord.in", "r");
    g = fopen("cifreord.out", "w");
    aparitions(f, g);
    fclose(f);
    fclose(g);
}