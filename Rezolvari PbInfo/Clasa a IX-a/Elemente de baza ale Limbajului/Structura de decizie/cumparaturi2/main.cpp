#include <iostream>

using namespace std;

int main()
{
    int S, d, r, m;
    cin >> S >> d >> r >> m;
    if(S>=d)
    {
        cout << "drona";
    }
    else if(S>=r && S<d)
        cout << "robot";
    else if(S>=m && S<r)
        cout << "masina";
    else cout << "nimic";
    return 0;
}
