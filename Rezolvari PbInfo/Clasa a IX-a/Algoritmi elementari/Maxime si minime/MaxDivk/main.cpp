#include <iostream>

using namespace std;

int main()
{
    int n, x, k, ap=0;
    cin >> n >> k;
    int maxim = -1000000000;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x > maxim && x%k==0)
            maxim = x, ap=1;
    }
    if(ap==0) cout<<"NU EXISTA";
    else cout << maxim;
    return 0;
}
