#include <iostream>

using namespace std;

int main()
{
    long long n, p=1;
    cin >> n;
    for(int i=2; i<=2*n; i=i+2)
    {
        p*=i;
    }
    cout << p;;
    return 0;
}
