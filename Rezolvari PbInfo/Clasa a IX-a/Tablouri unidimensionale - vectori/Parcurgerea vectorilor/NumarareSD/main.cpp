#include <iostream>
using namespace std;
int a[1001], s[1001], n, contor;
int main()
{
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        long long suma = 0;
        cin >> a[i];
        for(int d=1; d*d<=a[i]; d++)
        {
            if(a[i]%d==0 && d*d<a[i])
            {
                suma+=d+a[i]/d;
            }
            if(d*d==a[i])
                suma+=d;
        }
        s[i]=suma;
    }
    for(int i=1; i<=n-1; i++)
    {
        for(int j=i+1; i<=n; j++)
        {
            if(s[i]==s[j])
                contor++;
        }
    }
    cout << contor;
    return 0;
}
