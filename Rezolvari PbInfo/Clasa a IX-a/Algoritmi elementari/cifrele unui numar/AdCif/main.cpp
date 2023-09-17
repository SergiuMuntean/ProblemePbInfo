#include <iostream>

using namespace std;

long long calcul(long long n)
{
    long long s = 0;
    long long maxi = 0;
    long long p = 0;
    while(n)
    {
        if(n%10>maxi)
        {
            maxi = n%10;
            p = 1;
        }
        if(p==1)
            s += maxi;
        n /= 10;
        p--;
    }
    return s;
}

int main()
{
    long long a;
    cin >> a;
    cout << calcul(a);
    return 0;
}
