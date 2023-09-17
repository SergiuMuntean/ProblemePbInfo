#include <iostream>

using namespace std;

long long gcd(long long nr1, long long nr2)
{
    while(nr2!=0)
    {
        long long rest = nr1%nr2;
        nr1 = nr2;
        nr2 = rest;
    }
    return nr1;
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}


int main()
{
    long long a, b;
    cin >> a >> b;
    long long l = lcm(a, b);
    cout << (l / a) + (l / b) - 2;

    return 0;
}
