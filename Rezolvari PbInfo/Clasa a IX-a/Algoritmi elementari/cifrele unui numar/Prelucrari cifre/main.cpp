#include <iostream>

using namespace std;

long long sumaPatrate(long long a)
{
    int suma = 0;
    while(a)
    {
        suma += (a%10)*(a%10);
        a /= 10;
    }
    return suma;
}

long long sumaCifreImpare(long long a)
{
    int suma = 0;
    while(a)
    {
        if((a%10)%2==1)
            suma += a%10;
        a /=10;
    }
    return suma;
}

long long sumCifreDiv3(long long a)
{
    int suma = 0;
    while(a)
    {
        if((a%10)%3==0)
            suma += a%10;
        a /=10;
    }
    return suma;
}

long long cifreMaiMari5(long long a)
{
    int cif = 0;
    while(a)
    {
        if(a%10>5)
        {
            cif ++;
        }
        a /= 10;
    }
    return cif;
}
long long produsCifreDif0(long long a)
{
    int prod = 1;
    while(a)
    {
        if(a%10!=0)
            prod *= a%10;
        a /=10;
    }
    return prod;
}

long long suma(long long a)
{
    int sum = 0, par =0;
    while(a)
    {
        if(par==0)
            sum +=a%10;
        if(a<10)
            sum += a;
        a/=10;
        par++;
    }
    return sum;
}
int main()
{
    long long n;
    cin >> n;
    cout << sumaPatrate(n) << ' ' << sumaCifreImpare(n) << ' ' << sumCifreDiv3(n) << ' ' << cifreMaiMari5(n);
    cout << ' ' << produsCifreDif0(n) << ' ' << suma(n);
    return 0;
}
