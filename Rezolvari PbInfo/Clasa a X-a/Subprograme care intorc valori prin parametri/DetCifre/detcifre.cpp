#include<iostream>
using namespace std;

int detCifre(int number, int& first, int& last) {
    last = number % 10;
    while(number > 9) {
        number /= 10;
    }
    first = number;
}

int main() {
    int number, first, last;
    cin >> number;
    detCifre(number, first, last);
    cout << first << ' ' << last;
    return 0;
}