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
    if(a==1)
        return true;
    else
       return false;
}

int main()
{
    long long a, b;
    cin >> a;
    int contor = 0;
    while(b!=0)
    {
        cin >> b;
        if(primeIntreEle(a,b)==true)
        {
            contor++;
        }
        a = b;
    }
    cout << contor;
    return 0;
}
