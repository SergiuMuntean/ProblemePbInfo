#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = b*b-4*a*c;
    if(delta<0)
        cout << "Nu are solutii reale";
    else if (delta==0)
    {
        cout <<"Radacina dubla" << " ";
        x1=-b/(2*a);
        cout << fixed << setprecision(2) << (int)(x1*100)/100.0;
    }
    else if (delta>0)
    {
        x2=(-b-sqrt(delta)/(2*a));
        x1=(-b+sqrt(delta)/(2*a));
        cout << fixed << setprecision(2) << (int)(x1*100)/100.0 << " ";
        cout << fixed << setprecision(2) << (int)(x2*100)/100.0;
    }
    return 0;
}
