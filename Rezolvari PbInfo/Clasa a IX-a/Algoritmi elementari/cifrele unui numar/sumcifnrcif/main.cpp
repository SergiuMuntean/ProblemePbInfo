#include <iostream>

using namespace std;

long long calculSumaCif (long long n)
{
    int suma=0;
    while(n)
    {
        suma += n%10;
        n/=10;
    }
    return suma;
}

long long nrCif(long long n)
{
    int cif = 0;
    while(n)
    {
        cif++;
        n/=10;
    }
    return cif;
}

int main()
{
    long long number;
    cin >> number;
    cout << nrCif(calculSumaCif(number));
    return 0;
}
