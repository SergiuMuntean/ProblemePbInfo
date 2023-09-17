#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long ha, hb, d, aux;
    double x;
    cin >> ha >> hb >> d;
    if(ha<hb)
    {
        aux = ha;
        ha = hb;
        hb = aux;
    }
    x = abs (d*d+hb*hb-ha*ha)/(2*d);
    cout << x;
    return 0;
}
