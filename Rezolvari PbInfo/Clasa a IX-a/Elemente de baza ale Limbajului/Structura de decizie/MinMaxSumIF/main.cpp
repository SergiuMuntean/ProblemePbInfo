#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if((a%100)/10==(b%100)/10)
    {
        cout << a+b;
    }
    else if((a%100)/10<(b%100)/10)
        cout << b;
    else if((a%100)/10>(b%100)/10)
        cout << a;
    return 0;
}
