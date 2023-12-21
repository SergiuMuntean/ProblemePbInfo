#include<iostream>
using namespace std;

void oglindit(int number, int& ogl) {
    ogl = 0;
    while(number) {
        ogl = ogl * 10 + number % 10;
        number /= 10;
    }
}

int main() {
    int number, ogl;
    cin >> number;
    oglindit(number, ogl);
    cout << ogl;
    return 0;
}