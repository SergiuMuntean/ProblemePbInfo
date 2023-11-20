#include<stdio.h>

int arr[100];

void aparitions(int* noElements) {
    int x;
    scanf("%d", noElements);
    for(int i = 0; i < *noElements; i++) {
        scanf("%d", &x);
        if(x <= 100 && x >= 1) {
            arr[x]++;
        }
    }
}

void pairs(int noElements) {
    int count = 0;
    for(int i = 1; i <= 100; i++) {
        count += arr[i] / 2;
    }
    printf("%d", count);
}

int main() {
    int numOfEl;
    aparitions(&numOfEl);
    pairs(numOfEl);
    return 0;
}