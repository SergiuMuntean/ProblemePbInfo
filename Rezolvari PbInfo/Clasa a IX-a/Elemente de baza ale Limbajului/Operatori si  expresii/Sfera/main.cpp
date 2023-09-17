#include <iostream>
#define PI 3.141592653589
#include <iomanip>
using namespace std;

int main()
{
    long double r, Arie, Volum;
    cin >> r;
    Arie = 4*PI*r*r;
    Volum = 4 * PI * r * r * r /3;
    cout << fixed << setprecision(2) << (long long)(Arie*100)/100.0 << " "<< (long long)(Volum*100)/100.0;
    return 0;
}
