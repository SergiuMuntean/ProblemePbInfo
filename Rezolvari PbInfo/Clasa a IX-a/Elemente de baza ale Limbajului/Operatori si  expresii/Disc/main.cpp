#include <iostream>
#include <iomanip>
#define PI 3.141592653589
using namespace std;

int main()
{
    double r, aria, perimetrul;
    cin >> r;
    aria = PI * r * r;
    perimetrul = 2 * PI *r;
    cout << fixed << setprecision(6) << aria << " " << perimetrul;
    return 0;
}
