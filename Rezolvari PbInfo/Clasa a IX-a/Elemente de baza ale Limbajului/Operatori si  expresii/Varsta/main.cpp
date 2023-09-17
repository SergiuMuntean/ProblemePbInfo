#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    float k;
    k = (float)(b*c-a*d)/(d-c);
    k = (int) (k*100)/100.;
    cout << fixed << setprecision(2) << k;
    return 0;
}
