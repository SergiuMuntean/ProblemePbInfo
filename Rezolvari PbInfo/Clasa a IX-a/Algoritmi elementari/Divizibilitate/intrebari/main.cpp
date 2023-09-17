#include <iostream>

using namespace std;

long long sumaCifrelor(long long number)
{
    long long sumCif = 0;
    while(number)
    {
        sumCif += number%10;
        number/=10;
    }
    return sumCif;
}

long long numarDivizori(long long number)
{
    long long contor = 0;
    for(int d=1; d*d<=number; d++)
    {
        if(number%d==0 && d*d<number)
            contor+=2;
        if(d*d==number && number%d==0)
            contor++;
    }
    return contor;
}

int main()
{
    long long n, t, p, x;
    cin >> n >> t >> p;
    long long suma = 0;
    long long minim = 1000000000;
    long long maxim = 0;
    long long s = 0;
    long long nrDiv = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(i<=p)
        {
            if(x<minim)
                minim = x, s = sumaCifrelor(minim);
            if(x>maxim)
                maxim = x; nrDiv = numarDivizori(maxim);
        }
        suma +=x;
    }
    if(t==1)
        cout << s << endl << suma;
    if(t==2)
        cout << nrDiv << endl << suma;
    return 0;
}
