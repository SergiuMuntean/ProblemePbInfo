#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("2lan.in");
ofstream fout("2lan.out");
int main()
{
    int n, ultimacifra =-1;
    fin >> n;
    if(n==0)
        ultimacifra = 1;
    else if(n%4==1)
        ultimacifra = 2;
    else if (n%4==2)
        ultimacifra = 4;
    else if (n%4==3)
        ultimacifra = 8;
    else if (n%4==0 && n!=0)
        ultimacifra = 6;
    fout << ultimacifra;
    return 0;
}
