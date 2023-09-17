#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int nr;
    ifstream fin("platou1.in");
    ofstream fout("platou1.out");

    int lungimeCurenta, valoareCurenta, lungimeSecventaMaximala, valoareSecventaMaximala;
    lungimeSecventaMaximala = 0;

    fin >> nr;
    lungimeCurenta = 1;
    valoareCurenta = nr;
    while (fin >> nr)
    {
        if (nr == valoareCurenta)
        {
            lungimeCurenta++;
        }
        else
        {
            if (lungimeCurenta > lungimeSecventaMaximala)
            {
                lungimeSecventaMaximala = lungimeCurenta;
                valoareSecventaMaximala = valoareCurenta;
            }
            else if (lungimeCurenta == lungimeSecventaMaximala && valoareCurenta < valoareSecventaMaximala)
            {
                valoareSecventaMaximala = valoareCurenta;
            }

            lungimeCurenta = 1;
            valoareCurenta = nr;
        }
    }

    if (lungimeCurenta > lungimeSecventaMaximala)
    {
        lungimeSecventaMaximala = lungimeCurenta;
        valoareSecventaMaximala = valoareCurenta;
    }
    else if (lungimeCurenta == lungimeSecventaMaximala && valoareCurenta < valoareSecventaMaximala)
    {
        valoareSecventaMaximala = valoareCurenta;
    }

    fout << lungimeSecventaMaximala << " " << valoareSecventaMaximala;

    return 0;
}
