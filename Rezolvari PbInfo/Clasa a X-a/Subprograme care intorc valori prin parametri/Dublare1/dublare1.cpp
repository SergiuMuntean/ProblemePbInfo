#include<iostream>
using namespace std;

void dublare1(int& number) {
    int value = number;
    int product = 10;
    while(value > 9) {
        value /= 10;
        product *= 10;
    }
    number = value * product + number;
}

int main() {
    int number;
    cin >> number;
    dublare1(number);
    cout << number;
    return 0;
}