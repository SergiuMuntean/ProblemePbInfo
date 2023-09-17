#include <iostream>

using namespace std;

int main()
{
    int h1, m1, x, h2, m2, h, m;
    cin >> h1 >> m1 >> x;
    h = x/60;
    m = x%60;
    h2 = (h1 + h) + (m1+m)/60;
    m2 = (m1 + m)%60;
    if(h2>23)
        h2 = h2%24;
    cout << h2 << " " << m2;
    return 0;
}
