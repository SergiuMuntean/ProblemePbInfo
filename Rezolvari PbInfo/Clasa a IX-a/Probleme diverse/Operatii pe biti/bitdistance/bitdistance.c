#include<stdio.h>

int main() {
    unsigned long long number;
    scanf("%llu", &number);
    int bit = 0;
    while(number % 2 == 0) {
        number /= 2;
    }
    while(number) {
        number = number >> 1;
        bit++;
    }
    printf("%d", bit);
    return 0;
}