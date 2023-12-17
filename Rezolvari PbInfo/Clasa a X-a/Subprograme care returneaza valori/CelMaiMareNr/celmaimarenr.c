#include<stdio.h>

int cmmnr(int number) {
    int digit;
    int arr[10];
    int size = 0;
    while(number) {
        digit = number % 10;
        number /= 10;
        arr[size++] = digit;
    }

    int s1 = size - 1;
    for(int i = 0; i < s1; i++) {
        int s2 = i + 1;
        for(int j = s2; j < size; j++) {
            if(arr[i] < arr[j]) {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    int value = 0;
    for(int i = 0; i < size; i++) {
        value = value * 10 + arr[i];
    }
    return value;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d",cmmnr(number));
    return 0;
}