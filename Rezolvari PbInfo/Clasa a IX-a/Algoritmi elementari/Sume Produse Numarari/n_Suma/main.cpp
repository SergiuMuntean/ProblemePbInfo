#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("n_suma.in");
ofstream fout("n_suma.out");

int main()
{
    long long n, x, s=0;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin >> x;
        s = s+x;
    }
    fout << s;
    return 0;
}
