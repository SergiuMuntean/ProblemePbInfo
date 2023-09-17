#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if(n%2==0 && m%2==0)
        cout << n*m/4;
    else if(n%2==0 && m%2==1)
        cout << n/2*(m/2+1);
    else if(n%2==1 && m%2==0)
        cout << (n/2+1)*m/2;
    else if(n%2==1 && m%2==1)
        cout << (n/2+1)*(m/2+1);
    return 0;
}
