#include <iostream>

using namespace std;

long long countDivPari(long long n)
{
    long long contor = 0;
    for(int d = 1; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
        {
            if(d%2==0)
                contor++;
            if(n/d%2==0)
                contor++;
        }
        if(n%d==0 && d*d==n && d%2==0)
            contor++;
    }
    return contor;
}

int main()
{
    long long a;
    cin >> a;
    cout << countDivPari(a);
    return 0;
}
