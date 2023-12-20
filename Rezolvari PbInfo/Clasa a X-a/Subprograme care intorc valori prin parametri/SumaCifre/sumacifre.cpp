#include<iostream>
using namespace std;

void sum_cif(int number, int& evens, int& odds) {
    evens = 0;
    odds = 0;
    while(number) {
        if(number % 10 % 2 == 0) {
            evens += number % 10;
        }
        else {
            odds += number % 10;
        }
        number /= 10;
    }
}

int main() {
    int number, evens, odds;
    cin >> number;
    sum_cif(number, evens, odds);
    cout << evens << ' ' << odds;
    return 0;
}