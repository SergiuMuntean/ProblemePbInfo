#include<stdio.h>

int main(void) {
    long long number;
    int bit;
    scanf("%lld", &number);
    scanf("%d", &bit);
    long long value = number & ~(1 << bit);
    printf("%lld", value);
    return 0;
}