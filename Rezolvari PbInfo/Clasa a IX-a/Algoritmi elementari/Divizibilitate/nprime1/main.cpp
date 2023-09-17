#include <iostream>

using namespace std;

long long nrPrim(long long n)
{
    long long contor = 0;
    for(int d=2; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
            contor+=2;
        if(n%d==0 && d*d==n)
            contor++;
    }
    return contor;
}

int main()
{
    long long n;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
        if(nrPrim(i)==0)
            cout << i << ' ';
    }
    return 0;
}
