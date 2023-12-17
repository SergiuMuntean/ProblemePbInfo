#include<stdio.h>

int egal(int number) {
    int arr[9];
    int size = 0;
    while(number) {
        if(number % 10 % 2 == 1) {
            arr[size++] = number % 10;
        }
        number /= 10;
    }
    for(int i = 1; i < size; i++) {
        if(arr[i] != arr[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d", egal(number));
    return 0;
}