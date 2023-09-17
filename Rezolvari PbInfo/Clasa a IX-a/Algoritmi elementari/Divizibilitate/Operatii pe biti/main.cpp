#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << ' ' << b;
    return 0;
}
