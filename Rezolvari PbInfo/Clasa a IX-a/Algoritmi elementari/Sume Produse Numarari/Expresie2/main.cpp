#include <iostream>

using namespace std;

int main()
{
    long long n, suma=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        suma += i*(i+1);
    }
    cout << "Rezultatul este " << suma;
    return 0;
}
