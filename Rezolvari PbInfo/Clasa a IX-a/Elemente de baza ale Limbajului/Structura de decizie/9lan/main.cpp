#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
ifstream fin("9lan.in");
ofstream fout("9lan.out");
int main()
{
    int n;
    fin >> n;
    int ultimacifra;
    if(n%2==0)
        ultimacifra = 1;
    else if(n%2==1)
        ultimacifra = 9;
    fout << ultimacifra;
    return 0;
}
