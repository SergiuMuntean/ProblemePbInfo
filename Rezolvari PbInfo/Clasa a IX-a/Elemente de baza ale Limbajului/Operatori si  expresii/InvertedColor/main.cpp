#include <iostream>

using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    int R = 255-r;
    int G = 255 - g;
    int B = 255 - b;
    cout << R << " " << G << " " << B;
    return 0;
}
