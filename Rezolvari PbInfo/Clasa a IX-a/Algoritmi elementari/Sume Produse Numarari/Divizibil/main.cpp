#include <iostream>

using namespace std;

int main()
{
    long long t, n, c1, c2, c3, ct=0;
    cin >> t;
    cin >> n;
        cin >> c1 >> c2;
        if(t==2)
        for(int i=1; i<=n; i++)
        {
            if(i%c1!=0 && i%c2!=0)
                ct ++;
        }
    }
    if(t==2)
    {
        cin >> c1 >> c2 >> c3;
        for(int i=1; i<=n; i++)
        {
            if(i%c1!=0 && i%c2!=0 && i%c3!=0)
                ct ++;
        }
    }
    cout << ct;
    return 0;
}
