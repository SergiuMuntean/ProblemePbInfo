#include <iostream>
#include <cmath>
using namespace std;

long long inversare(long long n)
{
    int number = 0;
    int pivot = 1;
    if(n == 0)
        return 0;
    while(n)
    {
        int unitati = n%10;
        int zeci = (n/10)%10;
        number = number + unitati * pivot * 10 + zeci * pivot;
        pivot *= 100;
        n/=100;
    }
    return number;
}

int main()
{
    long long a;
    cin >> a;
    cout << inversare(a);
    return 0;
}
