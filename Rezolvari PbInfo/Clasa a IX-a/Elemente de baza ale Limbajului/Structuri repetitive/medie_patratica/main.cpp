#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double n, x, S=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        S = S + x*x;
    }
    cout << fixed << setprecision(2) << sqrt(S/n);
    return 0;
}
