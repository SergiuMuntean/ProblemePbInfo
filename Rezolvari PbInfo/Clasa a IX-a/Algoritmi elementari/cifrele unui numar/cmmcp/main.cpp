#include <iostream>

using namespace std;

int main()
{
    long long n, contor = 0, maxim = 0;
    cin >> n;
    if(n==0)
    {
        cout << 0;
        return 0;
    }
    while(n) // while (n!=0)
    {
        if(n%2==0 && n%10>maxim)
            maxim = n%10, contor =1;
        n = n/10;
    }
    if(!contor) // contor == 0
        cout << 10;
    else cout << maxim;
    return 0;
}
