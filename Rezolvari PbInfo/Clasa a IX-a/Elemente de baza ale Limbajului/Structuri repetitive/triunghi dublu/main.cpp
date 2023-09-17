#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
                cout << "*";
            cout <<endl;
    }
    for(int i=n+1; i<=2*n; i++)
    {
        for(int j=n+1; j<=2*n; j++)
        cout << " ";
        for(int j=n+2; j<=i; j++)
            cout << " ";
        for(int j=i; j<=2*n; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
