#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("concurs.in");
ofstream fout("concurs.out");

int main()
{
    int a, b ,n;
    fin >> a >> b >> n;
    if (n>=a && n<=b)
    fout << "DA";
    else fout << "NU";
    return 0;
}
