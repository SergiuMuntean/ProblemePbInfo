#include<stdio.h>

int main() {
    unsigned long long number;
    scanf("%llu", &number);
    int count = -1;
    while(number) {
        number = number >> 1;
        count++;
    }
    printf("%d", count);
    return 0;
}