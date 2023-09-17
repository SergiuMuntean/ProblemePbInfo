#include <iostream>

using namespace std;

long long sumaDivPari(long long n)
{
    long long suma = 0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0 && i*i<n)
        {
            if(i%2==0)
                suma += i;
            if(n/i%2==0)
                suma += n/i;
        }
        else if(n%i==0 && i*i==n && i%2==0)
            suma += i;
    }
    return suma;
}

int main()
{
    long long a;
    cin >> a;
    cout << sumaDivPari(a);
    return 0;
}
