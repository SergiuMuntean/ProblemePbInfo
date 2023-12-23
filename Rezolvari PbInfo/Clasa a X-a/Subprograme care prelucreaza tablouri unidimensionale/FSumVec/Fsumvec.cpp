#include<iostream>
using namespace std;

void readArray(int* arr, int& dim) {
    cin >> dim;
    for(int i = 1; i <= dim; i++) {
        cin >> arr[i];
    }
}

int suma(int v[], int n, int i, int j) {
    int sum = 0;
    for(int x = 1; x <= n; x++) {
        if(x < i || x > j) {
            sum += v[x];
        }
    }
    return sum;
}

int main() {
    int dim, arr[101], i, j;
    readArray(arr, dim);
    cin >> i >> j;
    int value = suma(arr, dim, i, j);
    cout << value;
    return 0;
}