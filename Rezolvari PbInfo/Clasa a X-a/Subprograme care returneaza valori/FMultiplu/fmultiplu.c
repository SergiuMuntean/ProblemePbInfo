#include<stdio.h>

unsigned multipli(unsigned a, unsigned b, unsigned c) {
    unsigned counter = 0;
    for(int i = a; i <= b; i++) {
        if(i % c == 0) {
            counter++;
        }
    }
    return counter;
}

int main() {
    unsigned a, b , c;
    scanf("%u%u%u", &a, &b, &c);
    printf("%u", multipli(a, b, c));
    return 0;
}