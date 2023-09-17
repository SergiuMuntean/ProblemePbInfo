#include <iostream>

using namespace std;

bool nrPrim(int n)
{
    int contor = 0;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0)
            contor+=2;
    }
    if(contor==2)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    int x, maxim = 0, aparitii = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(nrPrim(x)== true)
        {
            if(x > maxim)
                maxim = x, aparitii = 1;
            else if(x==maxim)
                aparitii++;
        }
    }
    cout << maxim << ' ' << aparitii;

    return 0;
}
