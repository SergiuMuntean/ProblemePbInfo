#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maximpar.in");
ofstream fout("maximpar.out");
int main()
{
    int n, x, ap=0, maxim = -1000000000;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin >> x;
        if(x%2==0 && x>maxim)
        {
            maxim = x, ap=1;
        }
        else if(x%2==0 && x==maxim)
            ap ++;
    }
    if(ap==0)
        fout <<"-1";
    else fout << maxim << ' ' << ap;
    return 0;
}
