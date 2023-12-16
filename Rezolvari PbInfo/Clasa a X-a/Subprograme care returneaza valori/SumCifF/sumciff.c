#include<stdio.h>

int sumcif(int number) {
    int sum = 0;
    while(number) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    int value = sumcif(number);
    printf("%d", value);
}