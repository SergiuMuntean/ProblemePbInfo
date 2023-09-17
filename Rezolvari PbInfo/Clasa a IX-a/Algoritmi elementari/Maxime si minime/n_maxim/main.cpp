#include <iostream>

using namespace std;

int main()
{
    int n, maxim=-1000000000, x;
    cin >> n;
    for(int i=1; i<=n; ++i)
    {
        cin >> x;
        if(x>maxim)
            maxim = x;
    }
    cout << maxim;

    return 0;
}
