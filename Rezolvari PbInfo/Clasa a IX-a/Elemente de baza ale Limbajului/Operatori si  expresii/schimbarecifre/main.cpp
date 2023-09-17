#include <iostream>

using namespace std;

int main()
{
    int a, value, patrat;
    cin >> a;
    value = (a%10) * 10 + (a/10);
    patrat = value * value;
    cout << patrat;
    return 0;
}
