#include <iostream>

using namespace std;

int main()
{
    int n, k, p;
    cin >> n >> k;
    if((n%k)>(k/2))
    {
        p = n/k*k + k;
    }
    else
        p = n/k*k;
    cout << p;
    return 0;
}
