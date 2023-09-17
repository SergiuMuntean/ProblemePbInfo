#include <iostream>

using namespace std;

int main()
{
    int n, value;
    cin >> n;
    value = (n/100)*10 + (n%10);
    cout << value;
    return 0;
}
