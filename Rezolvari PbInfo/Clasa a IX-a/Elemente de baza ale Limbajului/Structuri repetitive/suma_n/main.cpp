#include <iostream>

using namespace std;

int main()
{
    int n, suma=0, x;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        suma = suma + x;
    }
    cout << suma;
    return 0;
}
