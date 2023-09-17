#include <iostream>
#include <iomanip>
using namespace std;

bool numarPrim(int n)
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
    int n, x;
    double suma = 0, counter=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(numarPrim(x)==true)
            suma+=x, counter++;
    }
    double medie = suma/counter;
    cout << fixed << setprecision(2) << (int)(medie*100)/100.0;
    return 0;
}
