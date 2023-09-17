#include <iostream>

using namespace std;

int calcul2nd(int n)
{
    int cif;
    while(n)
    {
        if(n>=10 && n<=99)
        {
            cif = (n%100)%10;
        }
        n/=10;
    }
    return cif;
}
int determinareMaiMari(int n, int cifra)
{
    int contor = 0;
    while(n)
    {
        if(n%10>cifra)
            contor++;
        n/=10;
    }
    return contor;
}

int main()
{
    int a;
    cin >> a;
    int cifra = calcul2nd(a);
    cout << determinareMaiMari(a, cifra);
    return 0;
}
