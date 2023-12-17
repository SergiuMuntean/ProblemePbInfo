#include<stdio.h>

int concat(int a, int b) {
    int digits = 0;
    int value = 1;
    int oldB = b;
    while(b) {
        b /= 10;
        value *= 10;
    }

    int result = a * value + oldB;
    return result;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", concat(a,b));
    return 0;
}