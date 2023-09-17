#include <iostream>

using namespace std;

long long factorPutereMaxima(long long n)
{
    long long d = 2, maxim = 0, nrMaxim = 0;
    while(n>1)
    {
        int p = 0;
        while(n%d==0)
        {
            n/=d;
            p++;
        }
        if(p>=maxim)
            maxim = p, nrMaxim = d;
        d++;
        if(n>1 && d*d>n)
            d = n;
    }
    return nrMaxim;
}


int main()
{
    long long number;
    cin >> number;
    cout << factorPutereMaxima(number);
    return 0;
}
