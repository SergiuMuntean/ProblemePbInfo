#include <iostream>

using namespace std;

void pseudoPerfect(long long n)
{
    long long suma = 0;
    for(int d=1; d*d<=n; d++)
    {
        if(d*d<=n && n%d==0)
            suma += d + n/d;
        else if(d*d==n)
            suma -=d;
    }
    if(suma%n==0)
        cout << "DA";
    else
        cout << "NU";
}

int main()
{
    long long number;
    cin >> number;
    pseudoPerfect(number);
    return 0;
}
