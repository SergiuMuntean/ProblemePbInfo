#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
       for(int j=i+1; j<=n; j++)
            cout << ' ';
        for(int j=1; j<=i; j++)
            cout << i;
        for(int j=2; j<=i; j++)
            cout << i;
       // for(int j=i; j<=n; j++)
            //cout << ' ';
        cout << endl;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            cout << ' ';
        for(int j=i+1; j<=n; j++)
            cout << n-i;
        for(int j=i+2; j<=n; j++)
            cout << n-i;
        //for(int j=1; j<=i; j++)
            //cout <<' ';
        if(i<n)
        cout << endl;
    }
    return 0;
}
