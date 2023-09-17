#include <iostream>
#include <cmath>
using namespace std;

long long gcd(long long x, long long y)
{
    while(y!=0)
    {
        long long rest = x%y;
        x = y;
        y = rest;
    }
    return x;
}

void afisareDivizori(long long k)
{
    for(long long i=1; i*i<=k; i++)
    {
        if(k%i==0 && i*i<k)
            cout << i << ' ';
    }
    for(long long j = floor(sqrt(k)); j>=1; j--)
    {
        if(k%j==0)
        cout << k/j << ' ';
    }
}

int main()
{
    long long a, b;
    cin >> a >> b;
    long long g = gcd(a,b);
    afisareDivizori(g);
    return 0;
}
