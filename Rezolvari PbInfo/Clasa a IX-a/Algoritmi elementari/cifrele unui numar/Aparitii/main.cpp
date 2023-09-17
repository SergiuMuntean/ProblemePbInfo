#include <iostream>

using namespace std;

long long aparitiiUCifra(long long n)
{
    long long a = n%10;
    int aparitii = 0;
    if(n==0)
        return 1;
    while(n)
    {
        if(n%10==a)
            aparitii++;
        n/=10;
    }
    return aparitii;
}

int main()
{
    long long a;
    cin >> a;
    cout << aparitiiUCifra(a);
    return 0;
}
