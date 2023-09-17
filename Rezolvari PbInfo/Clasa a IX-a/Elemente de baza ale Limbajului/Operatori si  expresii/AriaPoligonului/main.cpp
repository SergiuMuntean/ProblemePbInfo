#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265359
using namespace std;

int main()
{
    int n, l;
    float A;
    cin >> n >> l;
    A = (int) (A*100)/100.0;
    A = (float) (n * l * l) / (4*(tan(PI/n)));
    cout << fixed << setprecision(2) << A;
    return 0;
}
