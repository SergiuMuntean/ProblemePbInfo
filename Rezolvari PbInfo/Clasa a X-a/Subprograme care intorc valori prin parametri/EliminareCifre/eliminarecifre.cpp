#include<iostream>
using namespace std;

void P(int& n, int c) {
    int array[20];
    int size = 0;
    while(n) {
        if(n % 10 != c) {
            array[size++] = n % 10;
        }
        n /= 10;
    }
    n = 0;
    for(int i = size - 1; i >= 0; i--) {
        n = n * 10 + array[i];
    }
}

int main() {
    int number, digit;
    cin >> number >> digit;
    P(number, digit);
    cout << number;
}