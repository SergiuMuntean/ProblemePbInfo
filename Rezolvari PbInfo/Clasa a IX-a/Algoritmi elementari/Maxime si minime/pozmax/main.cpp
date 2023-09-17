#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pozmax.in");
ofstream fout("pozmax.out");
int main()
{
    double n, x, maxim = -1000000000, aparitie1, aparitie2;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin >> x;
        if(x>maxim)
            maxim = x, aparitie1=i;
        else if(x==maxim)
            aparitie2 = i;
    }
    fout << aparitie1 << ' ' << aparitie2;
    return 0;
}
