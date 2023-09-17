#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double s = (a+b+c+d)/2;
    double aria = (sqrt((s-a)*(s-b)*(s-c)*(s-d)));
    cout << fixed << setprecision(3) << (int) (aria * 1000)/1000.0;
    return 0;
}
