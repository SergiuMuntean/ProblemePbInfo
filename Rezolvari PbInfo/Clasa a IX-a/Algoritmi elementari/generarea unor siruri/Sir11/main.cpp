#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sir11.in");
ofstream fout("sir11.out");

void inversFibo(long long n)
{
    long long f3, f1= 1, f2 = -1;
    int i = 3;
    while(i<=n)
    {
        f3 = 1 - 2*f2 - f1;
        f1 = f2;
        f2 = f3;
        i++;
    }
    for(int i=n; i>=3; i--)
    {
        fout << f2 << ' ';
        f3 = f2;
        f2 = f1;
        f1 = 1-2*f2-f3;
    }
    fout << -1 << ' ' << 1;
}

int main()
{
    long long a;
    fin >> a;
    inversFibo(a);
    return 0;
}
