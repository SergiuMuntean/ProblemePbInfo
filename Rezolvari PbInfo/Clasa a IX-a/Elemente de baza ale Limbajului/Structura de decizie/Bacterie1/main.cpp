#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bacterie.in");
ofstream fout("bacterie.out");

int main()
{
    long long n, m, neinfectat = 0;
    fin >> n >> m;
    if(n<=m)
        neinfectat = n*m-(n*(n+1)/2);
    else if(m<=n)
        neinfectat = n*m - (m*(m+1)/2);
    fout << neinfectat;
    return 0;
}
