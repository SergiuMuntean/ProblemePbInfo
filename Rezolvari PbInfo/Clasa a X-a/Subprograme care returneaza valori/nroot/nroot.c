#include<stdio.h>
#include<math.h>

long long nroot(int n, long long x) {
    if(x == 0) {
        return 0;
    }
    long long value = round(pow(abs(x), 1.0 / n));
    return value;
}

int main() {
    long long number;
    int n;
    scanf("%d%lld", &n, &number);
    printf("%lld", nroot(n, number));
}