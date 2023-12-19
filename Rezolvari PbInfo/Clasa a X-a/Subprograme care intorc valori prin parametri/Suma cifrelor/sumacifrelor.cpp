#include<iostream>
using namespace std;

void sum_cif(int number, int& value) {
    value = 0;
    while(number) {
        value += number % 10;
        number /= 10;
    }
}

int main() {
    int number, value;
    cin >> number;
    sum_cif(number, value);
    cout << value;
    return 0;
}