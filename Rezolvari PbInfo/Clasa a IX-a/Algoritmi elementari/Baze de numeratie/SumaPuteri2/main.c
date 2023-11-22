#include<stdio.h>
#include<math.h>

int power(int number) {
    int product = 1;
    while(product < number / 2) {
        product *= 2;
    }
    return product;
}

void descompunere(int number, int stopValue) {
    int arr[1000];
    int k = 0;
    while(number > 0) {
        if(number < stopValue) {
            stopValue /= 2;
        }
        else {
            arr[k++] = stopValue;
            number = number - stopValue;
        }
    }
    for(int i = k - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    int value = power(num);
    descompunere(num, value);
    return 0;
}
