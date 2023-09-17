#include <iostream>

using namespace std;

int main()
{
    int a, b, aux;
    unsigned int c;
    cin >> a >> b >> c;
    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if(c==1)
        cout << a + b;
    else if (c==2)
        cout << a - b;
    else if (c==3)
        cout << a * b;
    else if (c==4)
        cout << a / b;
    else if (c==5)
        cout << a % b;
    return 0;
}
