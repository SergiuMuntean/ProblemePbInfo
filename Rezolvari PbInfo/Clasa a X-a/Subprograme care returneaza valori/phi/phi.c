#include<stdio.h>

int Phi(int n) {
    int numbers = 0;
    for(int i = 1; i < n; i++) {
        int j = i;
        int x = n;
        while(j) {
            int rest = x % j;
            x = j;
            j = rest;
        }
        if(x == 1) {
            numbers++;
        }
    }
    return numbers;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d", Phi(number));
    return 0;
}