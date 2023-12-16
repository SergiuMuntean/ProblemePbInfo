#include<stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int value = number & (~0 - 3);
    printf("%d", value);
}