#include <iostream>

using namespace std;

int main()
{
    long double n, m;
    cin >> n >> m;
    for(int i=1; i<=m; i++)
        cout << "__0_0___";
    cout << endl;
    if(n>=2)
    {
        for(int i=1; i<=n-2; i++)
        {
            for(int j=1; j<=m; j++)
                cout << "_0___0__";
            cout << endl;
        }
        for(int i=1; i<=m; i++)
            cout << "0_____0_";

    }
    return 0;
}
