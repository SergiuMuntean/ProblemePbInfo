#include <iostream>

using namespace std;

long long nrPrim(long long n)
{
    long long contor = 0;
    for(int d=2; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
            contor+=2;
        if(d*d==n && n%d==0)
            contor++;
    }
    return contor;
}

int main()
{
    long long number;
    cin >> number;
    int i = 2;
    int j = 1;
    while(j<=number)
    {
        if(nrPrim(i)==0)
        {
            cout << i << ' ';
            j++;
        }
        i++;
    }
    return 0;
}
