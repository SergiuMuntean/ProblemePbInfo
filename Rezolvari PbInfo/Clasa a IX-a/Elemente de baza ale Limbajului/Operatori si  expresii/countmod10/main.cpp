#include <iostream>

using namespace std;

int main()
{
    int a, b, aux = 0;
    cin >> a >> b;
    if ((a%10 == 0) && (b%10 ==0))
        aux = b/ 10 - a/10 + 1;
    else aux = b/10 - a/10;

    cout << aux << endl;
    return 0;
}
