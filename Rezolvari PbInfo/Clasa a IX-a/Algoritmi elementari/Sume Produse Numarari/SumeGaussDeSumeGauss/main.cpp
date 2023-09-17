#include <iostream>

using namespace std;

int main()
{
    long long x, s=0, n;
    cin >> n;
    for(int k=1; k<=n; k++)
    {
        cin >> x;
        s = 0;
        for(int i=1; i<=x; i++)
        {
            for(int j=1; j<=i; j++)
                s+=j;
        }
        cout << s << " ";
    }
    return 0;
}
