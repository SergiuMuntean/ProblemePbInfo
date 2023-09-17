#include <iostream>

using namespace std;

int main()
{
    lomng long n, p=1;
    cin >> n;
    for(int i=1; i<=2*n-1; i=i+2)
    {
        p*=i;
    }
    cout << p;
    return 0;
}
