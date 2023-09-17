#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, pos1, pos2, pos3, pos4, pos5, pos6, suma;
    cin >> n;
    a = n%10;
    b = (n/10)%10;
    c = n/100;
    pos1 = (a*100) + (b*10) + c;
    pos2 = (a*100) + (c*10) + b;
    pos3 = (b*100) + (a*10) + c;
    pos4 = (b*100) + (c*10) + a;
    pos5 = (c*100) + (a*10) + b;
    pos6 = (c*100) + (b*10) + a;
    suma = pos1+pos2+pos3+pos4+pos5+pos6;
    cout << suma;
    return 0;
}
