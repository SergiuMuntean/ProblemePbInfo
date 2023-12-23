#include<iostream>
#include<cmath>
using namespace std;

void readArray(int arr[], int dim) {
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

void f_expo(int a[], int n) {
    for(int i = 0; i < n; i++) {
        a[i] = (int)log2(a[i]);
    }
}

int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    readArray(arr, size);
    f_expo(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    delete arr;
    return 0;
}