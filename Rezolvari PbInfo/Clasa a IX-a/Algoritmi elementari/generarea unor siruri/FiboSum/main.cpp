#include <iostream>

using namespace std;

void fiboSum(long long n)
{
    while(n>1)
    {
        long long a = 1, b = 1, c;
        while(a+b<=n)
        {
            c = a+b;
            a = b;
            b = c;
        }
        cout << c <<' ';
        n = n - c;
    }
    if(n!=0)
    cout << n;
}
int main()
{
    long long a;
    cin >> a;
    fiboSum(a);
    return 0;
}
