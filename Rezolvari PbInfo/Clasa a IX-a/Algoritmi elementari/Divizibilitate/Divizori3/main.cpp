#include <iostream>
#include <cmath>

using namespace std;

bool nrCuTreiDiv(int n)
{
    int contor = 0;
    for(int d=2; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
            contor+=2;
        if(d*d==n)
            contor++;
    }
    if(contor == 1)
        return true;
    else
        return false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int counter = 0, n = sqrt(a);
    if(n*n<a) n++;
    while(n*n<=b)
    {
        if(nrCuTreiDiv(n))
            counter++;
        n++;
    }
    cout << counter;
    return 0;
}
