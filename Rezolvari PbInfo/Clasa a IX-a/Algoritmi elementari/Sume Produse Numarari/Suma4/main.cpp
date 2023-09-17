#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long s=0;
    for(long long i=1; i<=n; i++)
    {
        s += i*i*i*i;
    }
    cout << s%10;
    return 0;
}
