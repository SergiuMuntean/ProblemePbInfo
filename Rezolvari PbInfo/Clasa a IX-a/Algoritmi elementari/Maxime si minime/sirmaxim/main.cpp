#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sirmaxim.in");
ofstream fout("sirmaxim.out");
int main()
{
    int n, x, maxim=0, contor=0;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin>>x;
        if(i<=n/2 && x>maxim)
        {
            maxim = x;
        }
        else if(i>n/2)
        {
            if(x==maxim)
                contor++;
        }
    }
    fout << contor;
    return 0;
}
