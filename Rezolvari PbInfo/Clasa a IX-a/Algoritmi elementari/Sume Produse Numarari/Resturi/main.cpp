#include <iostream>

using namespace std;

int main()
{
    long long n, k, s=0;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        s += (i%k);
    cout << s;
    return 0;
}
