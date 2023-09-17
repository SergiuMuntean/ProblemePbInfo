#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=n*m; i>=m; i=i-m)
        cout << i << " ";
    return 0;
}
