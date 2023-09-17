#include <iostream>

using namespace std;

int main()
{
    long long n, p, val = 1;
    cin >> n >> p;
    for(int i=1; val<=p; i++)
    {
        cout << val <<' ';
        val = val * n;
    }
    return 0;
}
