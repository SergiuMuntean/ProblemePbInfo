#include<iostream>
using namespace std;

void readArray(int* arr, int dim) {
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

void aranjare(int v[], int n) {
    int arr[10000];
    int size = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] % 2 == 1) {
            arr[size++] = v[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(v[i] % 2 == 0) {
            arr[size++] = v[i];
        }
    }
    for(int i = 0; i < n; i++) {
        v[i] = arr[i];
    }
}

int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    readArray(arr, size);
    aranjare(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}