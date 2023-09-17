#include <iostream>
#include <cmath>
using namespace std;

long long incrementare(long long n)
{
    long long number = 0;
    if (n==0)
        return 1;
    int i = 0;
    while(n)
    {
        int a = n%10;
        if(a%2==0)
            a++;
        number = number + a*pow(10,i);
        i++;
        n/=10;
    }
    return number;
}

int main()
{
    long long a;
    cin >> a;
    cout << incrementare(a);
    return 0;
}
