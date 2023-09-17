#include <iostream>
#include <cmath>
using namespace std;

long long transformare(long long a)
{
    int maxim = 0;
    int minim = 9;
    int i = 0;
    int valueMinim = 0;
    int valueMaxim = 0;
    long long stock = a;
    while(a)
    {
        int c = a%10;
        if(c>maxim)
            maxim = c, valueMaxim = i;
        if(c<minim)
            minim = c, valueMinim = i;
        a/=10;
        i++;
    }
    int aux;
    aux = valueMinim;
    valueMinim = valueMaxim;
    valueMaxim = aux;
    long long number = 0;
    i = 0;
    while(stock)
    {
        int p = stock%10;
        if(i!=valueMinim && i!=valueMaxim)
            number = number + p*pow(10,i);
        else if(i==valueMinim)
        {
            number = number + minim*pow(10,valueMinim);
        }
        else if(i==valueMaxim)
            number = number + maxim*pow(10,valueMaxim);
        i++;
        stock/=10;
    }
    return number;
}

int main()
{
    long long n;
    cin >> n;
    cout << transformare(n);
    return 0;
}
