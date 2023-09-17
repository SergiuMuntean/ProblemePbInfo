#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a,b , maxim =-1;
    for(int i=1; i<=n; ++i)
    {
        int x, y;
        cin >> x;
        cin >> y;
        if(x>y){
            int grdis = x-y;
            if(grdis > maxim)
            {
                maxim = grdis;
                a = x, b = y;
            }
        }
        else if(x<=y)
        {
            int grdis = y-x;
            if(grdis > maxim)
            {
                maxim = grdis;
                a = x, b = y;
            }

          }
    }
          cout << a << ' ' << b;
    return 0;
}
