#include <iostream>

using namespace std;

bool primeIntreEle(long long a, long long b)
{
    while(b!=0)
    {
        long long rest = a%b;
        a = b;
        b = rest;
    }
    if(a == 1)
        return true;
    else
        return false;
}

int main()
{
    long long n;
    cin >> n;
    int contor = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(primeIntreEle(i,j)== true && i<=j)
                contor++;
        }
    }
    cout << contor;
    return 0;
}
