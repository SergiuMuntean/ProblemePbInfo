#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maxim3.in");
ofstream fout("maxim3.out");

int main()
{
    int a, b, c, maxim;
    fin >> a >> b >> c;
    maxim = a;
    if(b>maxim)
        maxim = b;
    if(c>maxim)
        maxim = c;
    fout << maxim;
    return 0;
}
