#include <iostream>

using namespace std;

double sumaViete(double a, double b,double c, double n)
{
    double s = -b/a, p = c/a, s1 = s, s2 = s*s-2*p, s3 = s*s2 - p*s1;
    if(n==1)
        return s1;
    if(n==2)
        return s2;
    for(int i=3; i<=n; i++)
    {
        s1=s2;
        s2=s3;
        s3 = s*s2- p*s1;
        i++;
    }
    return s3;
}

int main()
{
    double a, b, c;
    double n;
    cin >> a >> b >> c >> n;
    cout << sumaViete(a,b,c,n);
    return 0;
}
