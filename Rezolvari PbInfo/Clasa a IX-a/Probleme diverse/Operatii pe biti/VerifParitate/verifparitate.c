#include<stdio.h>

void readArray(long long* arr, int dim) {
    for(int i = 0; i < dim; i++) {
        scanf("%lld", arr + i);
    }
}

void parityArray(long long* arr, int* parArr, int dim) {
    for(int i = 0; i < dim; i++) {
        if(arr[i] % 2 == 0) {
            parArr[i] = 0;
        }
        else {
            parArr[i] = 1;
        }
    }

    for(int i = 0; i < dim; i++) {
        printf("%d ", parArr[i]);
    }
}

int main() {
    int parArr[1000], dim;
    long long arr[1000];
    scanf("%d", &dim);
    readArray(arr, dim);
    parityArray(arr, parArr, dim);
}