#include <iostream>

using namespace std;

int main()
{
    int a, b ,c, maxim, minim;
    cin >> a >> b >> c;
    if (a>b && a>c)
        maxim = a;
    else if (b>a && b>c)
        maxim = b;
    else if (c>a && c>b)
        maxim = c;
    if (a<b && a<c)
        minim = a;
    else if (b<a && b<c)
        minim = b;
    else if (c<a && c<b)
        minim = c;
    cout << maxim - minim;
        return 0;
}
