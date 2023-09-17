#include <iostream>

using namespace std;

long long sumaCeruta(long long n)
{
    long long suma = 1;
    for(int d=2; d*d<=n; d++)
    {
        if(d*d<n && n%d==0)
            suma += d + n/d;
        if(d*d==n && n%d==0)
            suma += d;
    }
    return suma;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    long long m = sumaCeruta(a);
    long long n = sumaCeruta(b);
    if(m==b && n==a)
        cout << "PRIETENE";
    else
        cout << "NU SUNT PRIETENE";
    return 0;
}
