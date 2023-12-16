#include<stdio.h>

int main() {
    long long number;
    int bit;
    long long value;
    scanf("%lld", &number);
    scanf("%d", &bit);
    value = number | ((long long)1 << bit);
    printf("%lld", value);
}