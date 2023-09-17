#include <iostream>

using namespace std;

long long aparitiiPrimaCifra(long long n)
{
    long long stock = n;
    int primaCifra = 0;
    if(n==0)
        return 1;
    while(n)
    {
        if(n<10 && n>0)
            primaCifra = n;
        n/=10;
    }
    int aparitii = 0;
    while(stock)
    {
        if(stock%10==primaCifra)
            aparitii++;
        stock/=10;
    }
    return aparitii;
}

int main()
{
    long long a;
    cin >> a;
    cout << aparitiiPrimaCifra(a);
    return 0;
}
