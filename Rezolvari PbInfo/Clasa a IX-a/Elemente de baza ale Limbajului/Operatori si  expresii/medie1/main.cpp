#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x,y,z, a, b, c, d;
    cin >> x >> y >> z >> a >> b >> c >> d;
    float medie;
    medie = (x+y+z+a+b+c+d)/7;
    medie = (int) (medie*1000) / 1000.;
    cout << fixed << setprecision(3) << medie;
    return 0;
}
