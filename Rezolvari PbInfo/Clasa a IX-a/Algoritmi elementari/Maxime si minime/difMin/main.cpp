#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a, x, mem1, mem2, minim = 1000000000, suma = 1000000000;
    cin >> n;
    cin >> a;
    for(int i=2; i<=n; i++)
    {
        cin >> x;
        if(abs(a-x)< minim)
            minim = abs(a-x), mem1 = a, mem2 = x;
        else if(abs(a-x)==minim)
        {
            if(abs(a+x)<suma)
                mem1 = a, mem2 = x;
            suma = abs(a+x);
        }
        a = x;
    }
    cout << mem1 << ' ' << mem2;
    return 0;
}
