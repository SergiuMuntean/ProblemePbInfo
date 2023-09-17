#include <iostream>
using namespace std;

unsigned long long divizorImparMaxim(unsigned long long n)
{
    unsigned long long lasting;
    unsigned long long d;
    for(d = 1; d*d<=n; d++)
    {
        if(n/d%2==1 && n%d==0 && n%(n/d)==0)
            return n/d;
        if(n%d==0 && d%2==1)
            lasting = d;
    }
    return lasting;
}

int main()
{
    unsigned long long number, x = 1;
    cin >> number;
    for( unsigned long int i=1; i<=number; i++)
    {
        cin >> x;
        cout << divizorImparMaxim(x) << ' ';
    }
    return 0;
}
