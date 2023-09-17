#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char c, d;
    cin >> c >> d;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i%2==1 && j%2==0)
            {
                cout << d;
            }
            else if(i%2==0 && j%2==1)
                cout << d;
            else
                cout << c;
        }
        cout << endl;
    }
    return 0;
}
