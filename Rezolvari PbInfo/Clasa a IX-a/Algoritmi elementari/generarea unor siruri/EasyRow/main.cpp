#include <iostream>

using namespace std;

void generareSir(int n)
{
    int a = 1, b = 1;
    for(int i=2; i<=n; i++)
    {
        int cif = 0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
                cif++;
        }
        b += cif;
        a = b;
    }
        cout << b;
}

int main()
{
    int a;
    cin >> a;
    generareSir(a);
    return 0;
}
