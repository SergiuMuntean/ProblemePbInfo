#include<stdio.h>

int arr[1000];

int isPrime(int number) {
    int contor = 0;
    for(int d = 1; d * d <= number; d++) {
        if(number % d == 0) {
            contor += 2;
        }
        if(d * d == number) {
            contor--;
        }
    }
    
    if(contor == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

void aparitions(FILE* input, FILE* output) {
    int noElements, x, max = 0;
    fscanf(input, "%d", &noElements);
    for(int i = 0; i < noElements; i++) {
        fscanf(input, "%d", &x);
        if(x > 99 && x < 1000 && isPrime(x) == 1) {
            arr[x]++;
        }
        if(arr[x] > max) {
            max = arr[x];
        }
    }

    for(int i = 100; i < 1000; i++) {
        if(arr[i] == max) {
            fprintf(output, "%d", i);
            break;
        }
    }
}

int main() {
    FILE *f, *g;
    f = fopen("prime4.in", "r");
    g = fopen("prime4.out", "w");
    aparitions(f, g);
    fclose(f);
    fclose(g);
    return 0;
}