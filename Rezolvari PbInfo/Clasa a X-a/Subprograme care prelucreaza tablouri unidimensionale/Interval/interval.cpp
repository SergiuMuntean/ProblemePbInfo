#include<iostream>
using namespace std;

void readArray(int arr[], int& dim) {
    cin >> dim;
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

int interval(int a[], int n) {
    int x = a[0];
    int y = a[n - 1];
    if(x > y) {
        int aux = x;
        x = y;
        y = aux;
    }
    int counter = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] <= y && a[i] >= x) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int arr[100], dim;
    readArray(arr, dim);
    int value = interval(arr, dim);
    cout << value;
    return 0;
}