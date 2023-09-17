#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("canguri.in");
ofstream fout("canguri.out");

int main()
{
    int nrConcurs1, nrConcurs2, nrConcurs3, sar1, sar2, sar3, maximSaritura;
    fin >> nrConcurs1 >> sar1 >> nrConcurs2 >> sar2 >> nrConcurs3 >> sar3;
    maximSaritura = sar1;
    if(sar2> maximSaritura)
        maximSaritura = sar2;
    if(sar3>maximSaritura)
        maximSaritura = sar3;
    if(maximSaritura == sar1)
        fout << nrConcurs1 << endl;
    else if(maximSaritura == sar2)
        fout << nrConcurs2 << endl;
    else if(maximSaritura == sar3)
        fout << nrConcurs3 << endl;;
    if(800%maximSaritura==0)
        fout << 800/maximSaritura;
    else
        fout << 800/maximSaritura+1;
    return 0;
}
