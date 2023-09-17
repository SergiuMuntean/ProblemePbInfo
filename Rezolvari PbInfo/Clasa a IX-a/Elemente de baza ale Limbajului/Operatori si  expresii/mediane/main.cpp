#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double a, b, c, ma, mb, mc;
    cin >> a >> b >> c;
    if (a + b < c || a + c < b || b + c < a)
        cout << "Imposibil";
    else
    {
        ma = sqrt(2*(b*b+c*c)-a*a)/2;
        mb = sqrt(2*(a*a+c*c)-b*b)/2;
        mc = sqrt(2*(b*b+a*a)-c*c)/2;
        cout << fixed << setprecision(2) << (int)(ma*100)/ 100.0 << " " << (int)(mb*100)/ 100.0 << " " << (int)(mc*100)/ 100.0;
    }
    return 0;
}
