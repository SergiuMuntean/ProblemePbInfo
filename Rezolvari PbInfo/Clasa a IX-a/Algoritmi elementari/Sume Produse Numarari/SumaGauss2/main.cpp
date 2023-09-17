#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("sumagauss2.in");
ofstream fout("sumagauss2.out");

int main()
{
    long long n,m,s,difSum = 0;
    //suma numerelor de la n+1 la m ii s1-s2 , unde s1=1+... + n; s2 = 1 + ... + m;
    fin >> s;
    for(long long n=s; n>=0; n--)
    {
            m = -1+sqrt(1-8*s+4*n*(n+1))/2;
            if(n*(n+1)/2-m*(m+1)/2==s)
                fout<< n << ' ' << m << endl;
            else
            {
                m++;
                if(n*(n+1)/2-m*(m+1)/2==s)
                    fout << n << ' ' << m<< endl;
            }
    }

    return 0;
}
