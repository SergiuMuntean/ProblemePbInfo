#include <iostream>

using namespace std;

int factor_exp_max(long long n)
{
    int nrMaxim = 0, maxim = 0;
    int d = 2;
    while(n>1)
    {
        int p = 0;
        while(n%d==0)
        {
            p++;
            n/=d;
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
    cout << factor_exp_max(number);
    return 0;
}
