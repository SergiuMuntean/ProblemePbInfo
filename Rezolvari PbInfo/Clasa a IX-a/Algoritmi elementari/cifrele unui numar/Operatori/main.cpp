#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b;
    b = a++;
    a = b++;;
    cout << a << ' ' << b;
    return 0;
}
