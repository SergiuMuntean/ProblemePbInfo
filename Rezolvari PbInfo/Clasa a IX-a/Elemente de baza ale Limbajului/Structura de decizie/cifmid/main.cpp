#include <iostream>

using namespace std;

int main()
{
    long long a, b, maxim1, minim1, maxim2, minim2, sute1, sute2, zeci1, zeci2, unitati1, unitati2;
    cin >> a >> b;
    sute1 = a/100;
    sute2= b/100;
    zeci1 = a/10%10;
    zeci2 = b/10%10;
    unitati1 = a%10;
    unitati2 = b%10;
    maxim1 = sute1;
    if(zeci1 > maxim1)
    {
        maxim1 = zeci1;
    }
    if(unitati1 > maxim1)
        maxim1 = unitati1;
    maxim2 = sute2;
    if(zeci2 > maxim2)
    {
        maxim2 = zeci2;
    }
    if(unitati2 > maxim2)
        maxim2 = unitati2;
    minim1 = sute1;
    if(zeci1 < minim1)
    {
        minim1 = zeci1;
    }
    if(unitati1 < minim1)
        minim1 = unitati1;
    minim2 = sute2;
    if(zeci2 < minim2)
    {
        minim2 = zeci2;
    }
    if(unitati2 < minim2)
        minim2 = unitati2;
    if(maxim1 > maxim2)
        cout << maxim1 << maxim2 << " ";
    else
        cout << maxim2 << maxim1 << " ";

    if(minim1 < minim2)
        cout << minim1 << minim2 << " ";
    else
        cout << minim2 << minim1 << " ";

    return 0;
}
