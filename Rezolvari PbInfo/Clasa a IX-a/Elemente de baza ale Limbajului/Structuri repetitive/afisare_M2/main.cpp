#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for(int i=a; i<=a*b; i=i+a)
        cout << i << " ";
    return 0;
}
