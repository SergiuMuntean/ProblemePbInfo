#include<stdio.h>

int sum_div(int n){
    int sum = 0;
    for(int d = 1; d * d <= n; ++d){
        if(n % d == 0){
            sum += n / d;
            sum += d;
        }
        if(d * d == n)
            sum -= d;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%lld", sum_div(number));
    return 0;
}