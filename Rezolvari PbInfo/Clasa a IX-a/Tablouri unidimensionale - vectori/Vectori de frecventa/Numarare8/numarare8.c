#include<stdio.h>

int arr[1000];

int isPrime(int number) {
    int contor = 0;
    for(int d = 1; d * d <= number; d++) {
        if(number % d == 0) {
            contor+=2;
        }
        if(d * d == number) {
            contor--;
        }
   }
   
   if(contor == 2) {
        return 1;
   }
   else
        return 0;
}

void detector(FILE* input, FILE* output) {
    int numbers;
    int x;
    fscanf(input, "%d", &numbers);
    for(int i = 0; i < numbers; i++) {
        fscanf(input, "%d", &x);
        if(x > 99 && x < 1000 && isPrime(x) == 1) {
            arr[x] = 1;
        }
    }

    int countVar = 0;

    for(int i = 100; i < 1000; i++) {
        if(arr[i] == 0 && isPrime(i) == 1) {
            countVar++;
        }
    }

    fprintf(output, "%d", countVar);
}

int main() {
    FILE *f, *g;
    f = fopen("numarare8.in", "r");
    g = fopen("numarare8.out", "w");
    detector(f, g);
    fclose(f);
    fclose(g);

    return 0;
}