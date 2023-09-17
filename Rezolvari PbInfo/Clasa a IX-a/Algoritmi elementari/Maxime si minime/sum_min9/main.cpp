#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a, b, numarAles, s=0;
    for(int i=1; i<=n; i++)
    {
        cin >> a >> b;
        if(a<b)
        {
            numarAles = a;
        }
        else numarAles = b;
        s = s + numarAles;
    }
    cout << s;
    return 0;
}
