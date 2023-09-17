#include <iostream>
#include <cmath>
using namespace std;
void fibGeneralizat(long long n, long long a, long long b)
{
    long long c;
    c = a + b;
    if(abs(a)<=n)
        cout << a << ' ';
    if(abs(b)<=n)
        cout << b << ' ';
    while(abs(c)<=n)
    {
        a = b;
        b = c;
        cout << b << ' ';
        c = a + b;
    }

}

int main()
{
    long long x, a, b;
    cin >> a >> b >> x;
    fibGeneralizat(x, a, b);
    return 0;
}
