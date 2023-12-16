#include<stdio.h>

int main() {
    unsigned long long number;
    scanf("%llu", &number);
    int bit = 0;
    while(number) {
        unsigned long long previous = number;
        number = number & ~((unsigned long long)1 << bit);
        if(number != previous) {
            printf("%llu ", number);
        }
        bit++;
    }
    return 0;
}