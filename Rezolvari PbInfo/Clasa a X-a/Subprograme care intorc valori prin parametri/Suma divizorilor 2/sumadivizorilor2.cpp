#include<iostream>
using namespace std;

void sum_div(int number, int& sum) {
    for(int d = 1; d * d <= number; d++) {
        if(number % d == 0) {
            sum += number / d + d;
        }
        if(d * d == number) {
            sum -= d;
        }
    }
}

int main() {
    int number, sum = 0;
    cin >> number;
    sum_div(number, sum);
    cout << sum;
}