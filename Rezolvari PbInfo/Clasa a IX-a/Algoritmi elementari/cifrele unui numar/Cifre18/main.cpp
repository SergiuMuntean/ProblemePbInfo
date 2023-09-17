#include <iostream>
#include <math.h>

using namespace std;

long long numarCifre(long long n)
{
    int cif = 0;
    while(n)
    {
        cif ++;
        n/=10;
    }
    return cif;
}

long long transformare(long long n, int cifraCitita, int numarCifre)
{
    int i = 0;
    int number = 0;
    while(n)
    {
        int cifraCurenta = n%10;
        if(i+1==numarCifre+1-cifraCitita)
        {
            if(cifraCurenta<9)
                cifraCurenta++;
            else if(cifraCurenta == 9)
                cifraCurenta  = 0;

        }
        number =number + cifraCurenta*pow(10,i);
        i++;
        n/=10;
    }
    return number;
}

int main()
{
    long long a;
    cin >> a;
    int k;
    cin >> k;
    long long nrCifre = numarCifre(a);
    cout << transformare(a, k, nrCifre);
    return 0;
}
