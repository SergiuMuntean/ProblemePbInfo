#include <iostream>

using namespace std;

long long sumaDivImpari(long long n)
{
    long long suma = 0;
    for(int i=1; i*i<=n; i++)
    {
        if(i*i<n && n%i==0)
        {
            if(i%2==1)
                suma += i;
            if(n/i%2==1)
                suma += n/i;

        }
        else if(i*i==n && n%i==0 && i%2==1)
            suma += i;
    }
    return suma;
}

int main()
{
    long long a;
    cin >> a;
    cout << sumaDivImpari(a);
    return 0;
}
