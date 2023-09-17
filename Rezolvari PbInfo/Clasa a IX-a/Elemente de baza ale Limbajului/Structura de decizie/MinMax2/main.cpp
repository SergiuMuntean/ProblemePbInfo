#include <iostream>

using namespace std;

int main()
{
    int n, maxim, minim, sute =n/100;
    cin >> n;
    maxim = sute;
    minim = sute;
    int zeci = n/10%10, unitati = n%10;
    if(zeci > maxim)
    {
        maxim = zeci;
    }
    if(unitati > maxim)
            maxim = unitati;
    if(zeci < minim)
    {
        minim = zeci;
    }
    if(unitati < minim)
            minim = unitati;
    cout << maxim << " ";
    cout << minim << " ";
    cout << zeci << " ";
    if ((sute) >= minim && (sute)<=maxim)
        cout << sute;
    else if ((zeci) >= minim && (zeci)<=maxim)
        cout << zeci;
    else if ((unitati) >= minim && (unitati)<=maxim)
        cout << unitati;
    return 0;
}
