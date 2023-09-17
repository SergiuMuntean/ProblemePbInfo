#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d, x ,y;
    cin >> a >> b >> c >> d;
    if(a==c && b==d)
        cout << "Grafice echivalente";
    else if ((a==c&&b!=d)||(a!=c&&b==d))
        cout << "Grafice paralele";
    else if (a!=c && b!=d)
    {
        x=(d-b)/(a-c);
        y=a*x+b;
        cout << fixed << setprecision(2) << x << " " << y;
    }
    return 0;
}
