#include<iostream>
using namespace std;

void perm(int& n) {
    int arr[10];
    int size = 0;
    while(n) {
        arr[size++] = n % 10;
        n /= 10;
    }
    int value = arr[size - 1];
    for(int i = size - 1; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    n = 0;
    for(int i = size - 1; i >= 0; i--) {
        n = n * 10 + arr[i];
    }
}

int main() {
    int number;
    cin >> number;
    perm(number);
    cout << number;
    return 0;
}