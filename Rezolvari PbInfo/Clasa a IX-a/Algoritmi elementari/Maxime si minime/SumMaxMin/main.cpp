#include <iostream>

using namespace std;

int main()
{
    int n, suma, minim=100000000, maxim=-100000000, x;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x>=maxim)
            maxim =x;
        if(x<=minim)
            minim = x;
    }
    suma = minim + maxim;
    cout << suma;
    return 0;
}
