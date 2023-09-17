#include <iostream>

using namespace std;

int main()
{
    int n;
    char c, d;
    cin >> n >> c >> d;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i>=2 && i<=n-1 && j>=2 && j<=n-1)
                cout << d;
            else
                cout << c;
        }
        cout << endl;
    }
    return 0;
}
