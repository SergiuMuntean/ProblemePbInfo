#include <iostream>

using namespace std;

int main()
{
    int n, m, div=0, a, b, c;
    cin >> n >> m;
    a = n/100;
    b = n/10%10;
    c = n%10;
    if(a!=0 && m%a==0)
        div++;
    if(b!=0 && m%b==0)
        div++;
    if(c!=0 && m%c==0)
        div++;
    cout << div;
    return 0;
}
