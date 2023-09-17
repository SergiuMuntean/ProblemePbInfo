#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=k; i++)
        {
            for(int j=1; j<=k; j++)
            {
                cout << k;
            }
            cout << endl;
        }
    }
    return 0;
}
