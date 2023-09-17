#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    while(b)
    {
        long long rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}

int main()
{
    long long n, cmmdc, x, y;
    cin >> n;
    cin >> x;
    cin >> y;
    cmmdc = gcd(x,y);
    for(int i=3; i<=n; i++)
    {
       cin >> y;
       cmmdc=gcd(cmmdc,y);
    }
    cout << cmmdc;
    return 0;
}
