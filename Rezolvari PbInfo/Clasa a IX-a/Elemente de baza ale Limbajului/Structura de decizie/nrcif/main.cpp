#include <iostream>

using namespace std;

int main()
{
    int n, cif = 1;
    cin >> n;
    if(n!=0)
    {
        cif = 1;
        if((n/10)!=0)
        {
            cif = 2;
            if((n/100)!=0)
            {
                cif = 3;
            }
        }
    }
    cout << cif;
    return 0;
}
