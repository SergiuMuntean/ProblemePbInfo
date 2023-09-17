#include <iostream>

using namespace std;

int main()
{
    int a, b, d;
    if((a*b)%(d*d)==0)
        cout << (a*b)/(d*d);
    else
        cout << (a*b)/(d*d)+1;
    return 0;
}
