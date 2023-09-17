#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nrcurat.in");
ofstream fout("nrcurat.out");

long long oglindit(long long n)
{
    long long s = 0;
    while(n)
    {
        s = s * 10 + n%10;
        n /= 10;
    }
    return s;
}

long long urma(long long n)
{
    long long cif = 0;
    long long a = n;
    while(n)
    {
        cif = cif*10 + 9;
        n /=10;
    }
    return cif - a;
}

int main()
{
    long long a;
    while(fin>>a)
    {
        if(oglindit(a)==urma(a))
            fout << 1 << ' ';
        else
            fout << 0 << ' ';
    }
    return 0;
}
