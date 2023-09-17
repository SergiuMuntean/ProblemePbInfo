#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    while(b)
    {
        long long result = a%b;
        a = b;
        b = result;
    }
    return a;
}

int main()
{
    long long n, x, minim = 2000000000, maxim = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x>maxim)
            maxim = x;
        if(x<minim)
            minim = x;
    }
    long long nr1 = maxim;
    long long nr2 = minim;
    maxim /= gcd(nr1,nr2);
    minim /= gcd(nr1,nr2);
    cout << minim << '/' << maxim;
    return 0;
}
