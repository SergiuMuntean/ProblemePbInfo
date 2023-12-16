#include<stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int value = (number | 1) | (1 << 1);
    printf("%d", value);
    return 0;
}