#include <iostream>

using namespace std;

long long calculPrimaCifra(long long n)
{
    int cif;
    while(n)
    {
        if(n<10)
            cif = n;
        n/=10;
    }
    return cif;

}
long long nrCifMaiMici(long long n, long long cif)
{
    int value = 0;
    while(n)
    {
        if(n%10 < cif)
            value++;
        n/=10;
    }
    return value;
}

int main()
{
    long long a;
    cin >> a;
    cout << nrCifMaiMici(a, calculPrimaCifra(a));
    return 0;
}
