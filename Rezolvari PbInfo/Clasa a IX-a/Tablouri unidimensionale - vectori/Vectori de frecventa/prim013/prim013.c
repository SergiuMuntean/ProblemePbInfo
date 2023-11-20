#include<stdio.h>

int countDivisors(int number) {
    int contor = 0;
    for(int d = 1; d * d <= number; d++) {
        if(number % d == 0) {
            contor += 2;
        }
        if(d *d == number) {
            contor--;
        }
    }
    return contor;
}

int isPrime(int number) {
    if(number == 0 || number == 1) {
        return 0;
    }
    if(number == 2) {
        return 1;
    }
    if(number % 2 == 0) {
        return 0;
    }

    for(int d = 3; d * d <= number; d+=2) {
        if(number % d == 0) {
            return 0;
        }
    }
    return 1;
}

void countNumbers(FILE* input, FILE* output) {
    int noElements, x, contor = 0;
    fscanf(input, "%d", &noElements);
    for(int i = 0; i < noElements; i++) {
        fscanf(input, "%d", &x);
        int value = countDivisors(x);
        int result = isPrime(value);
        if(result == 1) {
            contor++;
        }
    }

    fprintf(output, "%d", contor);
}

int main() {
    FILE *f, *g;
    f = fopen("prim013.in", "r");
    g = fopen("prim013.out", "w");
    countNumbers(f, g);
    fclose(f);
    fclose(g);
}