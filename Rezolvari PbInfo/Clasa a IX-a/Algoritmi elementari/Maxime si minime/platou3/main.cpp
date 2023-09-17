#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("platou3.in");
ofstream fout("platou3.out");
int main()
{
    int n, x, lungimeCurenta=0, lungimeMaxima=0;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin >> x;
        if(x>0)
        {
            lungimeCurenta++;
            if(lungimeCurenta > lungimeMaxima)
                lungimeMaxima = lungimeCurenta;
        }
        else if(x<=0)
            lungimeCurenta = 0;
    }
    fout << lungimeMaxima;
    return 0;
}
