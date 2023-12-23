#include<iostream>
using namespace std;

void readArray(int* arr, int& dim) {
    cin >> dim;
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

void F(int n, int a[], int& k) {
    int size = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            a[size++] = a[i];
        }
    }
    if(size == 0) {
        k = - 1;
        return;
    }
    k = 0;
    for(int i = 0; i < size; i++) {
        k = k * 10 + a[i];
    }
}

int main() {
    int dim, arr[10], number;
    readArray(arr, dim);
    F(dim, arr, number);
    cout << number;
    return 0;
}