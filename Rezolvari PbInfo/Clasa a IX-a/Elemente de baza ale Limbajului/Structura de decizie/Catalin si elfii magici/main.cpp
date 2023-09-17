#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("elfii.in");
ofstream fout("elfii.out");
int main()
{
    int x, y ,z, transformari = 0;
    fin >> x >> y >> z;
    if((x%2!=0 && y%2!=0 && z%2!=0) || (x==0&&y==0&&z==0))
        fout << "Poate data viitoare";

    return 0;
}
