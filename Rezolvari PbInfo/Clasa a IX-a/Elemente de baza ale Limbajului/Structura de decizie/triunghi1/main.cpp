#include <iostream>

using namespace std;

int main()
{
    long double a, b, c;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
    {
       if((a*a+b*b)==(c*c) || (a*a+c*c)==(b*b) || (b*b+c*c)==(a*a))
       {
           cout << "triunghi dreptunghic";
       }
       else if ((a*a+b*b)<(c*c) || (a*a+c*c)<(b*b) || (b*b+c*c)<(a*a))
       {
           cout << "triunghi obtuzunghic";
       }
       else if ((a*a+b*b)>(c*c) || (a*a+c*c)>(b*b) || (b*b+c*c)>(a*a))
       {
           cout << "triunghi ascutitunghic";
       }
    }
    else cout << "nu este triunghi";
    return 0;
}
