#include<iostream>
using namespace std;

void sum_div_prim(int number, int& sum) {
    int counter;
    sum = 0;
    for(int i = 1; i <= number / 2; i++) {
        counter = 0;
        if(number % i == 0) {
            for(int d = 1; d * d <= i; d++) {
                if(i % d == 0) {
                    counter += 2;
                }
                if(d * d == i) {
                    counter--;
                }
            }
            if(counter == 2) {
                sum += i;
            }
        }
    }
    counter = 0;
    for(int d = 1; d * d <= number; d++) {
        if(number % d == 0) {
            counter += 2;
        }
        if(d * d == number) {
            counter--;
        }
        if(counter == 2) {
            sum += number;
        }
    }
}

int main() {
    int number, sum;
    cin >> number;
    sum_div_prim(number, sum);
    cout << sum;
}