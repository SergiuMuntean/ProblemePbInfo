#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.141592653589
using namespace std;

int main()
{
    int n;
    double a;
    double distanta;
    cin >> n >> a;
    distanta = a/(2*sin(pi/n));
    cout << fixed << setprecision(2) << (int) (distanta*100)/ 100.0;
    return 0;
}
