#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if ((x%2==0 && y%2==0) || (x%2==0 && z%2 ==0) || (y%2==0 && z%2==0))
        cout << "pare";
    else
        cout << "impare";
    return 0;
}
