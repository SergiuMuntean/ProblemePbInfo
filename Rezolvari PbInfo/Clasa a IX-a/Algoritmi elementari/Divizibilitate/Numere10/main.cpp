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

int main()
{
    int number;
    cin >> number;
    int counter = 0, x;
    int maxim = 0, minim = 1000000000;
    for(int i=1; i<=number; i++)
    {
        cin >> x;
        if(nrPrim(x)==true)
        {
            counter++;
            if(x > maxim)
                maxim = x;
            if(x < minim)
                minim = x;
        }
    }
    cout << counter << ' ' << minim << ' ' << maxim;
    return 0;
}
