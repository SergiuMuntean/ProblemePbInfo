#include <iostream>

using namespace std;

int main()
{
    long long n, suma=0;
    cin >> n;
    for(int i=1; i*i<=n; i++)
    {
        suma+=i*i;
    }
    cout << "Rezultatul este " << suma;
    return 0;
}
