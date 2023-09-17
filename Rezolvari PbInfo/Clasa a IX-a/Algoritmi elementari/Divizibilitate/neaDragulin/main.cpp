#include <iostream>
#include <cmath>
using namespace std;

long long nrCifre(long long number)
{
    long long contor = 0;
    while(number)
    {
        contor++;
        number/=10;
    }
    return contor;
}

long long transformare(long long number, long long kappa)
{
    long long initial = number;
    for(int i=1; i<kappa; i++)
    {
        number += initial * pow(10,nrCifre(number));
    }
    return number;
}

int main()
{
    long long n, k;
    cin >> n >> k;
    cout << transformare(n, k) % 72;
    return 0;
}
