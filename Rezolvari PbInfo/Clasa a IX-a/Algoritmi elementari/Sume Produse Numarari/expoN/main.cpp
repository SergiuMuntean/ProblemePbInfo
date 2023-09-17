#include <iostream>

using namespace std;

int main()
{
    long long n, result =2, exponent=0;
    cin >> n;
    while(result <=n)
    {
        result *= 2;
        exponent++;
    }
    cout << exponent;

    return 0;
}
