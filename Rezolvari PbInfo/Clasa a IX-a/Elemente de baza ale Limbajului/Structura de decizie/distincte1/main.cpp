#include <iostream>

using namespace std;

int main()
{
    int a, b, c, distincte = 0;
    cin >> a >> b >> c;
    if(a==b && b==c)
        distincte = 1;
    else if(a!=b && b!=c && a!=c)
        distincte = 3;
    else
        distincte = 2;
    cout << distincte;
    return 0;
}
