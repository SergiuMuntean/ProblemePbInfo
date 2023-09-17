#include <iostream>

using namespace std;

int main()
{
    int n, cifraUnitati, cifraZeci, cifraSute;
    cin >> n;
    cifraUnitati = n%10;
    n = n/10;
    cifraZeci = n%10;
    n = n/10;
    cifraSute = n%10;
    if (cifraUnitati == cifraZeci && cifraZeci == cifraSute)
        cout << "da";
    else
        cout << "nu";
    return 0;
}
