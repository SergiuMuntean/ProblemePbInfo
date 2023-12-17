#include<stdio.h>

int nr_cif_zero(int number) {
    if(number == 0) {
        return 1;
    }
    int counter = 0;
    while(number) {
        if(number % 10 == 0) {
            counter++;
        }
        number /= 10;
    }
    return counter;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d", nr_cif_zero(number));
}
