#include <iostream>

using namespace std;

int main()
{
    int n, k, p=1;
    cin >> n >> k;
    if(n%10==0)
    {
    for(int i=1; i<=k; i++)
        p = p*n;
    cout << p;
    }
    return 0;
}
