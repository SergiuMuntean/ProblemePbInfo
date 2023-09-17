#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b, n, x,y, grdis, minim = 1000000000, value;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x >> y;
        grdis = abs(x-y);
        if(grdis<minim)
            minim = grdis, value = i;
        else if(grdis == minim)
            value = i;

    }
    cout << value;
    return 0;
}
