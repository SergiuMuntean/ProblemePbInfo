#include<iostream>
using namespace std;

void readArray(int* arr, int& dim) {
    cin >> dim;
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

void shift(int x[], int n) {
    int value = x[0];
    for(int i = 0; i < n - 1; i++) {
        x[i] = x[i + 1];
    }
    x[n - 1] = value;
}

int main() {
    int arr[100], dim;
    readArray(arr, dim);
    shift(arr, dim);
    for(int i = 0; i < dim; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}