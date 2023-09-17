#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("rapunzel.in");
ofstream fout("rapunzel.out");
int main()
{
    long long n, m1, m2, z;
    fin >> n >> m1 >> m2;
    if(n%(m1+m2)==0)
        z = n/(m1+m2);
    else
        z = n/(m1+m2)+1;
    fout << z;
    return 0;
}
