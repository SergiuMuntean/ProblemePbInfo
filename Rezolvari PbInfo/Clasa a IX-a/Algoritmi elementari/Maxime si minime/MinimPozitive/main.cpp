#include <iostream>

using namespace std;

int main()
{
    int n=1, minimPoz=1000000000;
    while(n!=0)
    {
        cin >> n;
        if(n>0 && minimPoz>=n)
            minimPoz = n;
    }
    if(minimPoz==1000000000)
        cout << "NU EXISTA";
    else cout << minimPoz;

    return 0;
}
