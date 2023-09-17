#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, x, n, nrPerechi=0, maxim=-1000000000;
    cin >> n;
    cin >> a;
    for(int i=2; i<=n; i++)
    {
        cin >> x;
        if(abs(x-a)>maxim)
            maxim = abs(x - a), nrPerechi=1;
        else if(abs(x-a)==maxim)
            nrPerechi ++;
        a = x;
    }
    cout << maxim << ' ' << nrPerechi;
    return 0;
}
