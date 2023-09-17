#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, S=0, x, T;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        S=S+1/x;
    }
    T = n/S;
    cout << fixed << setprecision(2) << (int)(T*100)/100.0;
    return 0;
}
