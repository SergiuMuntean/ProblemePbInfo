#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
            cout << ' ';
        for(int j=1; j<=i; j++)
        {
            cout << c;
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
            cout << c;
        cout << endl;
    }
    return 0;
}
