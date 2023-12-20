#include<iostream>
using namespace std;

void cifminmax(int number, int& max, int& min) {
    min = 9;
    max = 0;
    if(number == 0) {
        min = 0;
        max = 0;
        return;
    }
    while(number) {
        if(number % 10 < min) {
            min = number % 10;
        }
        if(number % 10 > max) {
            max = number % 10;
        }
        number /= 10;
    }
}

int main() {
    int number, min, max;
    cin >> number;
    cifminmax(number, max, min);
    cout << max << ' ' << min;
    return 0;
}