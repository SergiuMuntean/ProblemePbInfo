#include <iostream>

using namespace std;

int main()
{
    int n, produs = 1;
    cin >> n;
    for(int i=2; i<=n+1; i++)
    {
        cout << produs <<' ';
        produs = produs + i*i;
    }
    return 0;
}
