#include <iostream>
#include <cmath>
using namespace std;

long long gdc(long long a, long long b)
{
    while(b)
    {
        long long rest = a%b;
        a = b;
        b = rest;
    }
    return a;
}

long long nrCifre(long long n)
{
    long long contor = 0;
    while(n)
    {
        contor++;
        n/=10;
    }
    return contor;
}

int main()
{
    long long n, a, b;
    cin >> n;
    long long cifre = nrCifre(n)/2;
    long long putere = pow(10,cifre);
    if(nrCifre(n)%2==0)
    {
        a = n/pow(10,cifre);
        b = n % putere;
    }
    else if(nrCifre(n)%2==1)
    {
        a = n/pow(10,cifre+1);
        b = n%putere;
    }
    cout << gdc(a,b);
    return 0;
}
