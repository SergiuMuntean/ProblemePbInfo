#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double d1, d2;
    cin >> d1 >> d2;
    double perimetru, arie;
    arie = (d1 * d2) / 2;
    perimetru = 4 * sqrt(d1*d1/4 + d2*d2/4);
    cout << perimetru << " " << arie;
    return 0;
}
