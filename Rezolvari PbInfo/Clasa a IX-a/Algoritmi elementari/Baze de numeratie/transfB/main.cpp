#include <iostream>
#include <cmath>
using namespace std;

long long transformareBazaZece(long long b, long long n)
{
    int x;
    long long putere = n-1;
    long long numar = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        numar+= x*pow(b,putere);
        putere--;
    }
    return numar;
}

int main()
{
    long long baza, numar;
    cin >> baza >> numar;
    cout << transformareBazaZece(baza,numar);
    return 0;
}
