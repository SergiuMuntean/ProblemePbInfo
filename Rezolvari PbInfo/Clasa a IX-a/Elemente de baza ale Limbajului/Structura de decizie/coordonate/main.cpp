#include <iostream>

using namespace std;

int main()
{
    long long n, x, y, val, v, i ,j;
    cin >> n >> x >> y >> val;
    v = n * (x-1) +y;
    cout << v << " ";
    i = val / n;
    j = val % n;
    if (j==0) j=n;
    else i++;
    cout << i << " " << j;
    return 0;
}
