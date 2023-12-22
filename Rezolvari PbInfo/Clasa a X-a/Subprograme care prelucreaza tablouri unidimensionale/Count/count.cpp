#include<iostream>
using namespace std;

void readArray(double arr[], int& dim) {
    cin >> dim;
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

int count(double a[], int n) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    double average = sum / n;
    int counter = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= average) {
            counter++;
        }
    }
    return counter;
}

int main() {
    double arr[100];
    int dim;
    readArray(arr, dim);
    int value = count(arr, dim);
    cout << value;
    return 0;
}