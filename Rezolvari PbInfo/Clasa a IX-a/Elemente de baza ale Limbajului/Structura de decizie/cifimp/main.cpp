#include <iostream>

using namespace std;

int main()
{
    int n, impare = 0;
    cin >> n;
    if(n%2 != 0)
    {
        impare++;
    }
    n = n/10;
    if (n%2!=0)
    {
        impare++;
    }
    n=n/10;
    if(n%2 != 0)
    {
        impare++;
    }
    cout << impare;
    return 0;
}
