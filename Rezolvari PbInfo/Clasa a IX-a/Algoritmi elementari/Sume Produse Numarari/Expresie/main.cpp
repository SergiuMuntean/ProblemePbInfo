#include <iostream>

using namespace std;

int main()
{
    long long n,s=0,p=1;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        p = 1;
        for(long long j=1; j<=i; j++)
        {
            p = p*j;
        }
        s = s+p;

    }
    cout <<"Rezultatul este " << s;
    return 0;
}
