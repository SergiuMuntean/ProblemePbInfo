#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, S, p, R;
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    R = (a*b*c)/(4*S);
    if((a+b)>=c && (a+c)>=b && (b+c)>=a)
    {
        cout << fixed << setprecision(2) << (int)(R*100)/ 100.0;
    }
    else
        cout <<"Imposibil";
    return 0;
}
