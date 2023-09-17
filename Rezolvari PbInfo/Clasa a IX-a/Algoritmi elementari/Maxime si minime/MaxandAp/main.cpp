#include <iostream>

using namespace std;

int main()
{
    int n, x, maxim = -1000000000, ap=0;
    cin >> n;
    for(int i=1; i<=n; ++i)
    {
        cin >> x;
        if(x>maxim)
            maxim = x, ap=1;
        else if(x == maxim)
            ap ++;
    }
    cout <<  maxim << ' ' << ap;
    return 0;
}
