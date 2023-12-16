#include<stdio.h>

long long sumfactcif(int number) {
    long long sum = 0;
    while(number) {
        int rest = number % 10;
        long long product = 1;
        for(int i = 2; i <= rest; i++) {
            product *= i;
        }
        sum += product;
        number /= 10;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    long long value = sumfactcif(number);
    printf("%lld", value);
}