#include<iostream>
using namespace std;

void readArray(int arr[], int& dim) {
    cin >> dim;
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

int multiplu(int arr[], int dim, int& k) {
    int counter = 0;
    for(int i = 0; i < dim; i++) {
        if(arr[i] % k == 0 && arr[i] % 10 == k) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int arr[100], dim, k;
    readArray(arr, dim);
    cin >> k;
    int value = multiplu(arr, dim, k);
    cout << value;
}