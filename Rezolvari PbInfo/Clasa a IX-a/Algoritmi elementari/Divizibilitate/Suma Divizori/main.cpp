#include <iostream>

using namespace std;

long long sumaDivizori(int n)
{
    long long suma = 0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0 && i*i<n)
            suma += i + n/i;
        else if(n%i == 0 && i*i==n)
            suma +=i;
    }
    return suma;
}

int main()
{
    int n;
    cin >> n;
    cout << sumaDivizori(n);
    return 0;
}
