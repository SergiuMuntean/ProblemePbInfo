#include <iostream>

using namespace std;

long long patratDivMic(long long n)
{
    for(int d=2; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
        {
        if(d<n/d)
            return d;
        else
            return n/d;
        }
        if(n%d==0 && d*d==n)
            return d;
    }
}

int main()
{
    long long a;
    cin >> a;
    cout << patratDivMic(a)*patratDivMic(a);
    return 0;
}
