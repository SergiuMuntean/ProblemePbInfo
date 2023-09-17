#include <iostream>

using namespace std;

int main()
{
    int s, n, x, minim = 1000000000, value, pozitie;
    cin >> s >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x < minim)
        {
            minim = x;
            value = s/x;
            pozitie = i;
        }
    }
    cout << value << ' ' << pozitie;
    return 0;
}
