#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("af.in");
ofstream fout("af.out");

int main()
{
    long long n, nr1, nr2, nr3;
    char semn, egal;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin >> nr1 >> semn >> nr2 >> egal >> nr3;
        if(semn=='+')
        {
            if(nr1+nr2 == nr3)
                fout << "Adevarat"<< endl;
            else
                fout << "Fals" << endl;
        }
        if(semn=='-')
        {
            if(nr1-nr2 == nr3)
                fout << "Adevarat"<< endl;
            else
                fout << "Fals" << endl;
        }
        if(semn=='x')
        {
            if(nr1*nr2 == nr3)
                fout << "Adevarat"<< endl;
            else
                fout << "Fals" << endl;
        }
        if(semn==':')
        {
            if(nr2==0)
                fout << "Fals" << endl;
            else if(nr1/nr2==nr3)
                fout << "Adevarat" << endl;
            else
                fout << "Fals" << endl;
        }
    }

    return 0;
}
