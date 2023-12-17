#include<stdio.h>

int oglindit(int number) {
    int ogl = 0;
    while(number) {
        ogl = ogl * 10 + number % 10;
        number /= 10;
    }
    return ogl;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d", oglindit(number));
    return 0;
}