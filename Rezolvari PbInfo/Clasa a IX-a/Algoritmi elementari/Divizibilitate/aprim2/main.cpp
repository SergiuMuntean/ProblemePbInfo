#include <iostream>

using namespace std;

bool aproapePrim(int n)
{
    int contor = 0;
    while(n%2 == 0)
    {
        n/=2;
        contor++;
    }
    for(int d=3; d*d<=n; d+=2)
    {
        while(n%d==0)
        {
            n/=d;
            contor++;
        }
    }
    if(n>2)
        contor++;
    if(contor == 2)
        return true;
    else
        return false;
}

int main()
{
    int number, maxim = 0, aparitii = 0, x;
    cin >> number;
    for(int i=1; i<=number; i++)
    {
        cin >> x;
        if(x>maxim && aproapePrim(x)==true)
            maxim = x, aparitii = 1;
        else if(x==maxim && aproapePrim(x)==true)
            aparitii++;
    }
    cout << maxim << ' ' << aparitii;
    return 0;
}
