#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    for(int i=1; i<=a; i++)
        n = n*10;
    cout << n;
    return 0;
}
