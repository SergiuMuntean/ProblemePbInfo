#include <iostream>

using namespace std;

long long factorial(long long nrCifre)
{
    int rezultatFactorial = 1;
    for(int i=2; i<=nrCifre; i++)
        rezultatFactorial*=i;
    return rezultatFactorial;
}
long long sumaCifrelor(long long n)
{
    int sumaCif = 0, nr = 0;
    while(n!=0)
    {
        sumaCif += n%10;
        n /= 10;
    }
    return sumaCif;
}
long long numarCifreDe1(long long n)
{
    int nr = 0;
    while(n!=0)
    {
        nr = nr*10 + 1;
        n /= 10;
    }
    return nr;
}
long long numarCifreMinus1(long long n)
{
    int nrCif = 0;
    while(n/10)
    {
        nrCif ++;
        n /= 10;
    }
    return nrCif;
}

int main()
{
    long long n;
    cin >> n;
    cout << factorial(numarCifreMinus1(n))*sumaCifrelor(n)*numarCifreDe1(n);
    return 0;
}
