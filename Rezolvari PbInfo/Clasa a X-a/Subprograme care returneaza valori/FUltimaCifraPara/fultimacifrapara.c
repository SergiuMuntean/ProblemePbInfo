#include<stdio.h>

int UCP(int number) {
    if(number == 0) {
        return 0;
    }
    while(number) {
        if(number % 10 % 2 == 0) {
            return number % 10;
        }
        number /= 10;
    }
    return -1;
}

int main() {
    int number;
    scanf("%d", &number);\
    printf("%d", UCP(number));
    return 0;
}