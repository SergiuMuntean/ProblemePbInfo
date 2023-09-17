#include <iostream>

using namespace std;

bool nrPrim(int n)
{
    if(n<2 || n%2==0 && n!=2)
        return false;
    for(int d=3; d*d<=n; d+=2)
    {
        if(n%d==0)
            return false;
    }
    return true;
}

int sumaCifre(int n)
{
    int contor = 0;
    while(n)
    {
        contor+=n%10;
        n/=10;
    }
    return contor;
}

int suma;

int main()
{
    int number, x=1;
    cin >> number;
    for(int i = 1; i <= number; i++)
    {
        cin >> x;
        if(nrPrim(x)==true)
            suma += sumaCifre(x);
    }
    cout << suma;
}
