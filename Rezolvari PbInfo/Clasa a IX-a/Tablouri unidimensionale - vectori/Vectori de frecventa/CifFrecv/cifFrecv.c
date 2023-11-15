#include<stdio.h>

int arr[10];

void aparitions(FILE* input, FILE* output) {
    int x;
    while(fscanf(input, "%d", &x) != EOF) {
        if(x < 10)
        arr[x]++;
    }

    int app = -1;
    int number = -1;

    for(int j = 9; j >= 0; j--) {
        if((j == 7 || j == 5 || j == 3 || j == 2) && (arr[j] >= 1)) {
            number = j;
            app = arr[j];
            break;
        }
    }

    fprintf(output, "%d %d", number, app);
}

int main() {
    FILE *f, *g;
    int dim;
    f = fopen("ciffrecv.in", "r");
    g = fopen("ciffrecv.out", "w");
    aparitions(f, g);
    fclose(f);
    fclose(g);
    return 0;
}
