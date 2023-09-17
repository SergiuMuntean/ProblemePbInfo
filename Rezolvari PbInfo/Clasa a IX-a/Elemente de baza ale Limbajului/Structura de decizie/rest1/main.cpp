#include <iostream>

using namespace std;

int main()
{
    long long n, c, r, m;
    cin >> n >> c >> r;
    if(m>n)
        m = n/c*c+r+c;
    else
        m = m = n/c*c+r;
    cout << m;
    return 0;
}
