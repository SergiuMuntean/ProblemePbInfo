#include<stdio.h>

int prim(int number) {
    int counter = 0;
    for(int d = 1; d *d <= number; d++) {
        if(number % d == 0) {
            counter += 2;
        }
        if(d * d == number) {
            counter--;
        }
    }
    if(counter == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d", prim(number));
}