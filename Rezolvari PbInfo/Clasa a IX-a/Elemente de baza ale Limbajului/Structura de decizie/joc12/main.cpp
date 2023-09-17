#include <iostream>

using namespace std;

int main()
{
    int x, a, b, y, c, d, aux1, aux2, multipli1, multipli2;
    cin >> x >> a >> b >> y >> c >> d;
    if(a>b)
    {
        aux1 = a;
        a = b;
        b = aux1;
    }
    if(c>d)
    {
        aux2 = c;
        c = d;
        d = aux2;
    }
    multipli1 = (b-a)/ x;
    multipli2 = (d-c)/ y;
    if(multipli1 > multipli2)
        cout << "Ioana " << multipli1;
    else if(multipli1 == multipli2)
        cout << "Egalitate";
    else if(multipli1 < multipli2)
        cout << "Maria " << multipli2;

    return 0;
}
