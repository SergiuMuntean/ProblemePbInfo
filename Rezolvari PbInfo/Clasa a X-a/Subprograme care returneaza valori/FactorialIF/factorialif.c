#include<stdio.h>

int fact(int number) {
    int product = 1;
    for(int i = 2; i <= number; i++) {
        product *= i;
    }
    return product;
}

int main() {
    int number;
    scanf("%d", &number);
    int value = fact(number);
    printf("%d", value);
}