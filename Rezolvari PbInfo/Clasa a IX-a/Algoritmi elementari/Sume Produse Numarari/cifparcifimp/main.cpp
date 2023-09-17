#include <iostream>

using namespace std;

int main()
{
    long long n, p = 0, i = 0, x, a;
    cin >> n;
    for(long long k=1; k<=n; k++)
    {
        cin >> x;
        if(x==0) p++;
        else while(x!=0)
        {
            a=x%10;
            if(a%2==0)
                p++;
            else i++;
            x/=10;
        }
    }
    cout << p <<' ' << i;
    return 0;
}
