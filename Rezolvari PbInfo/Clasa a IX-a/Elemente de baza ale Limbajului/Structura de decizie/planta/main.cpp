#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("planta.in");
ofstream fout("planta.out");

int main()
{
    long long int d, a, b, n, h;
    fin >> d >> a >> b >> n;
    if(n%2==1)
        d = d+(n+1)*a/2-n/2*b;
    else if(n%2==0)
        d = d+n*a/2-n*b/2;
    h = d;
    fout << h;
    return 0;
}
