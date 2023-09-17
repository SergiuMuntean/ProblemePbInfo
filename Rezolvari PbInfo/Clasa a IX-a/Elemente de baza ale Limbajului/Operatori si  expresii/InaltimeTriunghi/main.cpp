#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double c1, c2, i;
    cin >> c1 >> c2 >> i;
    double h = (c1 * c2) / i;
    cout << fixed << setprecision(2) << (int) (h*100)/ 100.0;
    return 0;
}
