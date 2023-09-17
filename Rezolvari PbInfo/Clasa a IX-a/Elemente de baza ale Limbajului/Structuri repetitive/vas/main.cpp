#include <iostream>

using namespace std;

int main()
{
    int x, t, y;
    long long int T=0;
    cin >> x >> t >> y;
    while(x>y)
    {
        x = x - (x/4);
        T = T + t;
    }
    cout << T;

    return 0;
}
