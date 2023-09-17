#include <iostream>

using namespace std;

int main()
{
    long long n=1, maxim = -1000000;
    cin >> n;
    if(n==0)
        cout << "NU EXISTA";
    else
    {
        while(n!=0)
    {
        cin >> n;
        if(n>maxim && n!=0)
            maxim = n;
    }
    cout << maxim;
    }
    return 0;
}
