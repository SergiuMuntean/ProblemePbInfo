#include <iostream>
#include <cmath>
using namespace std;

long long conversieBaza10(long long n,long long bi)
{
    long long bazaZece = 0;
    long long i = 0;
    while(n)
    {
        bazaZece+=n%10*pow(bi,i);
        n/=10;
        i++;
    }
    return bazaZece;
}

long long conversieBaza10laB(long long n,long long bf)
{
    long long rezultat = 0;
    long long i = 0;
    while(n)
    {
        rezultat+=n%bf*pow(10,i);
        n/=bf;
        i++;
    }
    return rezultat;
}

int main()
{
    long long number, bazaInit, bazaFin;
    cin >> number >> bazaInit >> bazaFin;
    long long nr10 = conversieBaza10(number, bazaInit);
    if (number == 0)
        cout << 0;
    else cout << conversieBaza10laB(nr10, bazaFin);
    return 0;
}
