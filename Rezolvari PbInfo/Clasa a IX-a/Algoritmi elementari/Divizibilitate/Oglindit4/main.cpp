#include <iostream>

using namespace std;

bool prime(long long a, long long b)
{
    while(b)
    {
        long long result = a%b;
        a = b;
        b = result;
    }
    if(a==1)
        return true;
    else
        return false;
}

long long oglindit(long long n)
{
    long long ogl = 0;
    while(n)
    {
        ogl = ogl * 10 + n%10;
        n/=10;
    }
    return ogl;
}

int main()
{
    long long n, x;
    int contor = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        long long oglindi = oglindit(x);
        if(prime(x,oglindi) == true)
            contor++;
    }
    cout << contor;
    return 0;
}
