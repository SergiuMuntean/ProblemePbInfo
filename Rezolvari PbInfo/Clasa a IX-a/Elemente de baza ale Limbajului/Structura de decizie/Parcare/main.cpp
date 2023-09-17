#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("parcare.in");
ofstream fout("parcare.out");

int main()
{
    int ziInt, lunaInt, oraInt, minutInt, ziPlec, lunaPlec, oraPlec, minutPlec, t, cerinta;
    fin >> ziInt >> lunaInt >> oraInt >> minutInt >> ziPlec >> lunaPlec >> oraPlec >> minutPlec >> t >> cerinta;
    int dzile, dore, dminute, dluna;
    int ore, plata, value;
    dluna = lunaPlec - lunaInt;
    if (dluna == 0)
    {
        dzile = ziPlec - ziInt;
        dzile = dzile * 1440;
        dore = oraPlec - oraInt;
        dore = 60 * dore;
        dminute = minutPlec - minutInt + dore + dzile + dluna;
    }
    else
    {
        if (lunaInt == 1 || lunaInt == 3 || lunaInt == 5 || lunaInt == 7 || lunaInt == 8 || lunaInt == 10 || lunaInt == 12)
            value = 31;
        else if (lunaInt == 2)
            value = 28;
        else
            value = 30;
        dzile = ziPlec - ziInt + value;
        dzile = dzile * 1440;
        dore = oraPlec - oraInt;
        dore = 60 * dore;
        dminute = minutPlec - minutInt + dore + dzile + dluna - 1;
    }
    if (dminute % 60 == 0)
        ore = dminute / 60;
    else
        ore = dminute / 60 + 1;
    if (dminute > 15)
        plata = t * ore;
    else
        plata = 0;
    if (cerinta == 1)
    {
        fout << dminute;
    }
    else if (cerinta == 2)
    {
        fout << plata;
    }
    return 0;
}
