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
    if(contor==2)
        return true;
    else
        return false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if(a>b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    int counter = 0;
    for(int i=a; i<=b; i++)
    {
        if(nrPrim(i)==true)
            counter++;
    }
    cout << counter;
    return 0;
}
