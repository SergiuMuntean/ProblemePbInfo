#include <iostream>

using namespace std;

unsigned long long countDivisors(unsigned long long n)
{
    unsigned long long contor = 0;
    for(unsigned long long d=2; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
            contor+=2;
        if(d*d==n && n%d==0)
            contor++;
    }
    contor+=2;
    return contor;
}

int main()
{
    unsigned long long number;
    cin >> number;
    unsigned long long maxim = countDivisors(1);
    unsigned long long maximNumar;
    for(unsigned long long i=1; i<=number; i++)
    {
        if(countDivisors(i)>maxim)
            maxim = countDivisors(i), maximNumar = i;
    }

        cout << maximNumar;
    return 0;
}
