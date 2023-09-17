#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r1, g1, b1, r2, g2, b2, n;
    long long valR, valG, valB;
    cin >> r1 >> g1 >> b1 >> r2 >> g2 >> b2 >> n;
    valR = abs((r2-r1)/(n-1));
    valG  = abs((g2-g1)/(n-1));
    valB = abs((b2-b1)/(n-1));
    if(r1<=r2 || g1<=g2 || b1<=b2)
    {
        for(int i=1; i<=n; i++)
        {
            if(i==n)
            {
                r1 = r2;
                g1 = g2;
                b1 = b2;
            }
            cout << r1 << ", " << g1 << ", "<< b1 << endl;
            r1 = r1+valR;
            g1 = g1+valG;
            b1 = b1 + valB;

        }
    }
    if(r1>r2 || g1>g2 || b1>b2)
 {
        for(int i=1; i<=n; i++)
        {
            if(i==n)
            {
                r1 = r2;
                g1 = g2;
                b1 = b2;
            }
            cout << r1 << ", " << g1 << ", "<< b1 << endl;
            r1 = r1-valR;
            g1 = g1-valG;
            b1 = b1 - valB;
        }
    }
    return 0;
}
