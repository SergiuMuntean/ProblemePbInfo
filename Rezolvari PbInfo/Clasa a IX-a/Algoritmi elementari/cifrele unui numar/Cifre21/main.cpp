#include <iostream>

using namespace std;

long long numereCuZero(long long n)
{
    long long p = 0;
    long long x;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x==0)
            p++;
        while(x)
        {
            if(x%10==0)
            {
                p++;
                break;
            }
            x /= 10;
        }
    }
    return p;
}

int main()
{
    long long a;
    cin >> a;
    cout << numereCuZero(a);
    return 0;
}
