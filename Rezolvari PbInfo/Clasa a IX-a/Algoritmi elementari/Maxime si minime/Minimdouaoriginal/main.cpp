#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("minimdoua.in");
ofstream fout("minimdoua.out");
int main()
{
    long long n, x, minim1=1000000000, minim2=1000000000, ap=0;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin >> x;
        if(x>=10 && x%10 == x%100/10 && x<minim1)
        {
            ap++;
            minim2 = minim1;
            minim1 = x;
        }
        else if(x>=10 && x%10 == x%100/10 && x<minim2)
            minim2 = x, ap++;
    }
        if(ap==0 || ap==1)
        fout << "numere insuficiente";
        else fout << minim1 << ' ' << minim2;
        return 0;
}
