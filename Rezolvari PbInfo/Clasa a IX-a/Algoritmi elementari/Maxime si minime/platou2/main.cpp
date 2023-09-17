#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("platou2.in");
ofstream fout("platou2.out");
int main()
{
    int n, x, valoareCurenta, lungimeCurenta = 1, lungimeSecventaMaximala = 1;
    fin >> n;
    fin >> x;
    for(int i=1; i<n; i++)
    {
        valoareCurenta = x;
        fin >> x;
        if(x>valoareCurenta)
        {
            lungimeCurenta++;
        }
        else if(x<=valoareCurenta)
        {
            if(lungimeCurenta>lungimeSecventaMaximala)
            {
                lungimeSecventaMaximala = lungimeCurenta;
            }
            lungimeCurenta = 1;

        }
    }
    if(lungimeCurenta>lungimeSecventaMaximala)
            {
                lungimeSecventaMaximala = lungimeCurenta;
            }
    fout << lungimeSecventaMaximala;
    return 0;
}
