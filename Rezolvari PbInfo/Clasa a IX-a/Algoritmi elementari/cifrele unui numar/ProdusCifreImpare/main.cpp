#include <iostream>

using namespace std;

int main()
{
    long long n, p =1, contor = 0;
    cin >> n;
    while(n!=0)
    {
        if(n%2==1)
            p = p*(n%10), contor = 1;
        n = n/10;
    }
    if (contor == 0)
        cout << -1;
    else cout << p;
    return 0;
}
