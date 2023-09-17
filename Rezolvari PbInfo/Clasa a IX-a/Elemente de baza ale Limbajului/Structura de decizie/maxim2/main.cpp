#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maxim.in");
ofstream fout("maxim.out");

int main()
{
    int a, b;
    fin >> a >> b;
    if(a>b)
    {
        fout << a;
    }
    else
        fout << b;
    return 0;
}
