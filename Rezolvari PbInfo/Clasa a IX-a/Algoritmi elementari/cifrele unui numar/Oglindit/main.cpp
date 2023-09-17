#include <iostream>

using namespace std;

long long oglindit(long long n)
{
    long long p = 0;
    while(n)
    {
        p = p * 10 + n%10;
        n/=10;
    }
    return p;
}
int main()
{
    long long number;
    cin >> number;
    cout << oglindit(number);
    return 0;
}
