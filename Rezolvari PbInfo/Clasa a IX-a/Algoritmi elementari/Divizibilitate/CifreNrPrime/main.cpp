#include <iostream>

using namespace std;

bool nrPrim(int n)
{
    int contor = 0;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0)
            contor+=2;
        if(d*d==n)
            contor--;
    }
    if(contor == 2)
        return true;
    else
        return false;
}

int countCifre(int n)
{
    int contor = 0;
    while(n)
    {
        n/=10;
        contor++;
    }
    return contor;
}

int main()
{
    int number, x, sum = 0;
    cin >> number;
    for(int i = 1; i<=number; i++)
    {
        cin >> x;
        if(nrPrim(x))
            sum += countCifre(x);
    }
    cout << sum;
    return 0;
}
