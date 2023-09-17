#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int P, A, D;
    P = 2 * a + 2 * b;
    A = a * b;
    D = a * a + b * b;
    cout << P << " " << A << " " << D;
    return 0;
}
