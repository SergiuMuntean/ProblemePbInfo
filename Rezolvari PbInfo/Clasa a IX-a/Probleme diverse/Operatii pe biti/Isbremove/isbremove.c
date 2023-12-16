#include<stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int bit = 0;
    while(number) {
        int previous = number;
        number = number & ~(1 << bit);
        if(number != previous) {
            printf("%d", number);
            return 0;
        }
        bit++;
    }
    return 0;
}