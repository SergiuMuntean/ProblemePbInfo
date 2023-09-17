#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, r, S, p;
    cin >> a >> b >> c;
    if((a<=b+c) && (b<=a+c) && (c<=a+b) && (a>0) && (b>0) && (c>0))
    {
        p = (a+b+c)/2;
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        r = S/p;
        cout << fixed << setprecision(2) << (int) (r*100)/100.0;

    }
    else
        cout << "Imposibil";

    return 0;
}
