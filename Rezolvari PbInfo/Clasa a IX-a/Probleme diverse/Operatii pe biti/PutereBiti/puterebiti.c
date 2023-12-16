#include<stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int value = 1;
    for(int i = 0; i < number; i++) {
        value *= 2;
    }
    printf("%d", value);
    return 0;
}