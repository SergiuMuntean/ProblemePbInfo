#include<stdio.h>

int sum_cifra_control(int a, int b) {
    int contor = 0;
    for(int num = a; num <= b; num++) {
        int sum = 0;
        int i = num;
        while(i) {
            sum += i % 10;
            i /= 10;
            if(i == 0 && sum >= 10) {
                i = sum;
                sum = 0;
            }
        }
        if(sum == a) {
            contor++;
        }
    }
    return contor;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", sum_cifra_control(a, b));
    return 0;
}