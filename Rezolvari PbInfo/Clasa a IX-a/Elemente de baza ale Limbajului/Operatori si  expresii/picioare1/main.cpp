#include <iostream>

using namespace std;

int main()
{
    int c, p, g, o;
    cin >> c >> p;
    o = (p-2*c)/2;
    g = (4*c-p)/2;
    cout << g << " " << o;
    return 0;
}
