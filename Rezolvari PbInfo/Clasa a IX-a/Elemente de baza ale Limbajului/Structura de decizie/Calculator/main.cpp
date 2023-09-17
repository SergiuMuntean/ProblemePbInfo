#include <iostream>

using namespace std;

int main()
{
    long long a, b, R, aux;
    char c;
    cin >> a >> b >> c;
    if(a<b)
    {
      aux = a;
      a = b;
      b = aux;
    }
    if(c=='+')
        R = a+b;
    else if(c =='-')
        R = a-b;
    else if(c =='*')
        R = a*b;
    else if(c == '/')
        R= a/b;
    cout << R;
    return 0;
}
