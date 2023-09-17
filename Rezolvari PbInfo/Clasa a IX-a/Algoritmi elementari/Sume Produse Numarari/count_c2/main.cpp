#include <iostream>

using namespace std;

int main()
{
    long long n, x, c=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x>=10 && x<=99)
            c++;
    }
    cout << c;
    return 0;
}
