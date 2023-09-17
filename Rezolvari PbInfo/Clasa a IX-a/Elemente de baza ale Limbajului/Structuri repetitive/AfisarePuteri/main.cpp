#include <iostream>

using namespace std;

int main()
{
    int n, p, value=1;
    cin >> n >> p;
    for(int i=1; value <= p; i++)
    {
        cout << value << ' ';
        value = value *n;
    }
    return 0;
}
