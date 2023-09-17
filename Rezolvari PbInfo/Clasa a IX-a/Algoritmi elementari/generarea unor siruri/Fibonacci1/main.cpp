#include <iostream>

using namespace std;

void fibonacci1(long long n)
{
    long long a = 1, b = 1, c = 1;
    if(n==1)
        cout << a << ' ' << b;
    else if(n==2)
        cout << a << ' ' << b << ' ' << 2;
    else if(n>2)
    {
        cout << a << ' '<< b << ' ';
    }
    while(c<=n)
    {
        if(c>1)
        cout << c << ' ';
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    long long a;
    cin >> a;
    fibonacci1(a);
    return 0;
}
