#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.14159265
using namespace std;

int main()
{
    double a, b, u, c;
    cin >> a >> b >> u;
    c = sqrt((a * a) + (b * b) - (2*a*b*cos(pi*u/180)));
    cout << fixed << setprecision(2) << (int) (c  * 100)/ 100.0;
    return 0;
}
