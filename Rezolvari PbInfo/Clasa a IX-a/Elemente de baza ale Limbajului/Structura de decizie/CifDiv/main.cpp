#include <iostream>

using namespace std;

int main()
{
    int n, m, div=0, a, b, c;
    cin >> n >> m;
    a = n/100;
    b = n/10%10;
    c = n%10;
    if(m%a==0 && a!=0)
        div++;
    if(m%b==0 && b!=0)
        div++;
    if(m%c==0 && c!=0)
        div++;
    cout << div;
    return 0;
}
