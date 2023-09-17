#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    if(a+b>100)
        cout << 100-(100-a+100-b);
    else
        cout << 0;
    return 0;
}
