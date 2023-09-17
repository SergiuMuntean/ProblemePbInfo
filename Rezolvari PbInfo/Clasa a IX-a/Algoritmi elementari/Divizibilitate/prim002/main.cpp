#include <iostream>

using namespace std;

long long maxPrim(long long n)
{
    long long d = 2;
    while(n>1)
    {
        while(n%d==0)
            n/=d;
        if(n==1)
            return d;
        d++;
        if(n>1 && d*d>n)
            d = n;
    }
}

int main()
{
    long long number;
    cin >> number;
    cout << maxPrim(number);
    return 0;
}
