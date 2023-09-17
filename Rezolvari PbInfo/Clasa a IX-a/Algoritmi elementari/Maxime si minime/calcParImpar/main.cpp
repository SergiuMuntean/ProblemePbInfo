#include <iostream>

using namespace std;

int main()
{
    long long n, x, maxim = -10000000000, minim = 10000000000;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(i%2==0 && x > maxim)
            maxim = x;
        if(i%2!=0 && x < minim && (x>=10 && x<=99))
            minim = x;
    }
    cout << maxim << ' ';
    if(minim != 10000000000)
        cout << minim;
    else cout << "-1";
    return 0;
}
