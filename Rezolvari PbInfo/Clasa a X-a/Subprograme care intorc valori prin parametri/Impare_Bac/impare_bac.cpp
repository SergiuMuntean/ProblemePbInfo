#include<iostream>
using namespace std;

void Impare(int& n) {
    int arr[10];
    int size = 0;
    while(n) {
        arr[size++] = n % 10;
        n /= 10;
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 1) {
            arr[i]--;
        }
    }
    n = 0;
    for(int i = size - 1; i >= 0; i--) {
        n = n * 10 + arr[i];
    }
}

int main() {
    int number;
    cin >> number;
    Impare(number);
    cout << number;
    return 0;
}