#include <iostream>

using namespace std;

int main()
{
    int n, x, minim = 1000000000, maxim = 0, value;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        value = x;
        while(value>=10)
        {
            value = value/10;
        }
        if(value<minim)
        {
            minim = value;
            maxim = x;
        }
        else if(x > maxim && value == minim)
            maxim = x;
    }
    cout << maxim;
    return 0;
}
