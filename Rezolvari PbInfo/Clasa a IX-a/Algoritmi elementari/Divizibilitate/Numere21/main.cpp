#include <iostream>

using namespace std;

bool primeIntreEle(long long a, long long b)
{
    while(b)
    {
        long long rest = a % b;
        a = b;
        b = rest;
    }
    if(a==1)
        return true;
    else
        return false;
}

long long oglindit(long long n)
{
    long long ogl = 0;
    while(n)
    {
        ogl = ogl * 10 + n%10;
        n/=10;
    }
    return ogl;
}



int main()
{
    long long x=1, y=1;
    long long suma = 0;
    while(x && y)
    {
        cin >> x;
        cin >> y;
        long long ogl1 = oglindit(x);
        long long ogl2 = oglindit(y);
        if(primeIntreEle(x,y)== true && primeIntreEle(ogl1,ogl2)== true)
            suma += x+y;
    }
    cout << suma;
    return 0;
}
