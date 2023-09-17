#include <iostream>

using namespace std;

int main()
{
    long long n, s=0, contor=0, x, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x%2!=0)
            s = s+x;
        if(x%k==0)
            contor++;
    }
    cout << s << ' ' << contor;
    return 0;
}
