#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int minim = x;
    if(y<x)
    {
        minim = y;
         if(z<y)
        {
        minim = z;
        }
    }

    cout << minim;
    return 0;
}
