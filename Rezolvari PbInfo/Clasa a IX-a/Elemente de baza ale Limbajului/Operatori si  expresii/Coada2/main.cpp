#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("coada2.in");
ofstream fout("coada2.out");

int main()
{
    long long x, y, z, S;
    fin >> x >> y >> z;
    fin.close();
    S = -x+y+z;
    if(x>=y || x>=z)
    {
        fout << "-1";
    }
    else
    {
    fout << S;
    }
    fout.close();
    return 0;
}
