#include <iostream>

using namespace std;

long long numarCifre(long long nrNumere)
{
    long long numereCuNumarImparCifre = 0;
    cin >> nrNumere;
    long long x;
    for(int i=1; i<=nrNumere; i++)
    {
    long long contor = 0;
        cin >> x;
        if(x==0)
            numereCuNumarImparCifre++;
        while(x)
        {
            contor++;
            x/=10;
        }
        if(contor%2==1)
            numereCuNumarImparCifre++;
    }
    return numereCuNumarImparCifre;
}

int main()
{
    long long n;
    cout << numarCifre(n);
    return 0;
}
