#include <iostream>

using namespace std;

int main()
{
    int n, maxim;
    cin >> n;
    maxim = n/100;
    if(n/10%10 > maxim)
    {
        maxim = n/10%10;
        if(n%10 > maxim)
            maxim = n%10;
    }
    cout << maxim;
    return 0;
}
