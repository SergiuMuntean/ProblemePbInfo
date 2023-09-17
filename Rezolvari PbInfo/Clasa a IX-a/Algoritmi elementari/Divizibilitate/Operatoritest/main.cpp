#include <iostream>

using namespace std;

int main()
{
    int a = 10, b;
    b = a*=2;
    cout << a << ' ' << b;
    a = 12, b = 15;
    a>b ? a+=5: b-=4;
    cout <<'\n'<< a << ' ' << b;

    int x, y, z;
    x = 0, y = x+2, z = y*2;
    cout <<'\n' << x << ' ' << y << ' ' << z;
    return 0;
}
