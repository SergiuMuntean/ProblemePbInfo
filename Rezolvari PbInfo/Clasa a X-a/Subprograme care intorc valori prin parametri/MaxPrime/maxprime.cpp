#include<iostream>
using namespace std;

void sub(int n, int& a, int& b) {
    int counter;
    int detect = 0;
    for(int i = n - 1; i >= 2; i--) {
        counter = 0;
        for(int d = 1; d * d <= i; d++) {
            if(i % d == 0) {
                counter += 2;
            }
            else if(d *d == i) {
                counter--;
            }
        }
        if(counter == 2 && detect == 1) {
            b = i;
            return;
        }
        if(counter == 2 && detect == 0) {
            a = i;
            detect++;
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