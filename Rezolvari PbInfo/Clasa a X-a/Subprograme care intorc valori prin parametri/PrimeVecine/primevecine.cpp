#include<iostream>
using namespace std;

void sub(int n, int& a, int& b) {
    int counter;
    for(int i = n - 1; i >= 2; i--) {
        counter = 0;
        for(int d = 1; d * d <= i; d++) {
            if(i % d == 0) {
                counter += 2;
            }
            else if(d * d == i) {
                counter--;
            }
        }
        if(counter == 2) {
            a = i;
            break;
        }
    }

    int counter1;
    for(int i = n + 1; i < 1000000000; i++) {
        counter1 = 0;
        for(int d = 1; d * d <= i; d++) {
            if(i % d == 0) {
                counter1 += 2;
            }
            else if(d * d == i) {
                counter1--;
            }
        }
        if(counter1 == 2) {
            b = i;
            return;
        }
    }
}

int main() {
    int number, a, b;
    cin >> number;
    sub(number, a, b);
    cout << a << ' ' << b;
    return 0;
}