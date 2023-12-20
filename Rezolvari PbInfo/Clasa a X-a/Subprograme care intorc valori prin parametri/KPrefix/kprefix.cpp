#include<iostream>
using namespace std;

void prefix(int number, int k, int& value) {
    int product = 1;
    for(int i = 0; i < k; i++) {
        product *= 10;
    }
    while(number > (product - 1)) {
        number /= 10;
    }
    value = number;
}

int main() {
    int number, k, value;
    cin >> number >> k;
    prefix(number, k, value);
    cout << value;
    return 0;
}