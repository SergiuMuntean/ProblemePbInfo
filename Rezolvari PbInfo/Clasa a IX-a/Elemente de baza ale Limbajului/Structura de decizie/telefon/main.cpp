#include <iostream>

using namespace std;

int main()
{
    int n, L, Z;
    cin >> n;
    n = (n/100)%10000;
    Z = n%100;
    n = n/100;
    L = n%100;
    if(L<10) cout << 0;
    cout << L << " ";
    if (Z<10) cout << 0;
    cout << Z;

    return 0;
}
