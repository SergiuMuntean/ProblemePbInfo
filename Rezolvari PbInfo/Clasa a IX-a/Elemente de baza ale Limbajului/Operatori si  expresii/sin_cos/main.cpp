#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14
using namespace std;

int main()
{
    double x, value;
    cin >> x;
    value = PI * x / 180;
    cout << fixed << setprecision(3) <<(int) (sin(value)*1000)/1000.0 << " " <<(int) (cos(value)*1000)/1000.0;
    return 0;
}
