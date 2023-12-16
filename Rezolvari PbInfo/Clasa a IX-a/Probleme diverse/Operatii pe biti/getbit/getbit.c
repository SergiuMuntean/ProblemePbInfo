#include<stdio.h>

int main() {
    int dim, bit;
    long long bits[100], number;
    scanf("%d", &dim);
    for(int i = 0; i < dim; i++) {
        scanf("%lld", &number);
        scanf("%d", &bit);
        bits[i] = (number >> bit) & 1;
    }
    for(int i = 0; i < dim; i++) {
        printf("%lld", bits[i]);
    }
    return 0;
}