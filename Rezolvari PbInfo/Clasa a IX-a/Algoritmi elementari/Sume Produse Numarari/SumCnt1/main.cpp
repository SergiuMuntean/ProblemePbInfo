#include <iostream>

using namespace std;

int main()
{
    long long n=1, s=0, contor=0;
    while(n!=0)
    {
        cin >> n;
        if(n%2==0)
            s = s+n;
        if(n/10>0&&n/10<10)
            contor++;
    }
    cout << s << ' ' << contor;
    return 0;
}
