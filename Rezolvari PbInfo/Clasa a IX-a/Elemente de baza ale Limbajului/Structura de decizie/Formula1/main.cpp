#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("formula1.in");
ofstream fout("formula1.out");
int main()
{
    long long c, k, n, A;
    fin >> c >> k >> n;
    if(c==1)
    {
        fout << (2*k-1)*(2*k-1);
    }
    if(c==2)
    {
        A = n*(n+1)*(2*n+1)/12;
        fout << 2*A+1;
    }
    return 0;
}
