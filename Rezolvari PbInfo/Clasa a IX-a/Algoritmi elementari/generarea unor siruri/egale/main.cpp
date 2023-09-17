#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("egale.in");
ofstream fout("egale.out");

void functie1(long long a, long long b)
{
    long long i;
    while(i>=a && i<=b)
    {
        if(i<10)
        {
            cout << i << ' ';
            i++;
        }
        i = 11;
        if(i>=10&& i<=100)
        {
            cout << i << ' ';
            i+=11;
        }

    }
}

int main()
{
    int t;
    long long a, b;
    int nrMaximCifre;
    fin >> t;
    if(t==1)
    {
        fin >> a >> b;
        functie1(a,b);
    }
   /* else if(t==2)
        fin >> nrMaximCifre;
        functie2(nrMaximCifre);
    cout << "Hello world!" << endl; */
    return 0;
}
