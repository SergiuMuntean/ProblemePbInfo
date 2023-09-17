#include <iostream>

using namespace std;

int main()
{
    int n, k, p=1,contor =0;
    cin >> n >> k;
    while(n!=0)
    {
        if(n%10!=k)
            p = p*(n%10), contor = 1;
        n = n/10;
    }
    if(contor==1) cout << p;
    else if(contor ==0) cout << 0;
    return 0;
}
