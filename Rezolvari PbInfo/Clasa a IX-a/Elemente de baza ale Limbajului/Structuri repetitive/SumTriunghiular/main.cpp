#include <iostream>

using namespace std;

int main()
{
    long long n, k, x, S=0;
    cin >> n >> k;
    for(int i=0; i<k; i++)
    {
        cin >> x;
        S = S + x;
    }
    S = S+n;
    if(S==n)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
