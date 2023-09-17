#include <iostream>

using namespace std;

int main()
{
    long long n , x, y, numarAles, s=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x >> y;
        if(x>y)
        {
            numarAles= x;
        }
        else numarAles = y;
        s += numarAles;
    }
    cout << s;
    return 0;
}
