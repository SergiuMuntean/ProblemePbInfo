#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(sqrt(x)==(int)sqrt(x))
            cout << "DA" << endl;
        else
            cout << "NU" << endl;

    }

    return 0;
}
