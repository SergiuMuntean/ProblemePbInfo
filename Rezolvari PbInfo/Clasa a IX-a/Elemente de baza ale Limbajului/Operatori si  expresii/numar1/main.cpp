#include <iostream>

using namespace std;

int main()
{
    int n, number, patratNumar;
    cin >> n;
    number = (n/100)*10 + (n%10);
    patratNumar = number * number;
    cout << patratNumar;
    return 0;
}
