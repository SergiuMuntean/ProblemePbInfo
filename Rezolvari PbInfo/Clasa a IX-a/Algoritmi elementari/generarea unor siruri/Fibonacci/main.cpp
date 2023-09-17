#include <iostream>

using namespace std;

void fibonacci(long long n)
{
    long long a = 1, b = 1, c;
    if(n==1)
    cout << a << ' ' ;
    if(n>=2)
    cout << a << ' ' << b << ' ';
    int i = 3;
    while(i<=n)
    {
        c = a + b;
        cout << c << ' ';
        a = b;
        b = c;
        i++;
    }
}

int main()
{
    long long a;
    cin >> a;
    fibonacci(a);
    return 0;
}
