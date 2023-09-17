#include <iostream>

using namespace std;

long long calcul(long long n)
{
    long long d = 2, suma = 0;
    while(n>1)
    {
        while(n%d==0)
        {
            n/=d;
            suma += d;
        }
        d++;
        if(n>1 && d*d>n)
            d = n;
    }
    return suma;
}

int main()
{
    long long number;
    cin >> number;
    cout << calcul(number);
    return 0;
}
