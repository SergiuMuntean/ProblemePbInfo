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
    int n;
    cin >> n;
    int j = 1;
    for(int i=3; j<=n; i++)
    {
        if(nrPrim(i) && nrPrim(i+2) && i%2==1)
        {
            cout << i << ' ' << i+2;
            cout << endl;
            j++;
        }
    }

    return 0;
}
