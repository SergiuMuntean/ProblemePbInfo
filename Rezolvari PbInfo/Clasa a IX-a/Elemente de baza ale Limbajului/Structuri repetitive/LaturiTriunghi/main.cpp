#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
            cout << ' ';
        for(int j=1; j<=i; j++)
            {
                if(i==1 || i==2 || i==n)
                    cout << "* ";
                if(j==1 || j==n)
                    cout << "*";
                else
                    cout << " ";
            }
        cout << endl;
    }
    return 0;
}
