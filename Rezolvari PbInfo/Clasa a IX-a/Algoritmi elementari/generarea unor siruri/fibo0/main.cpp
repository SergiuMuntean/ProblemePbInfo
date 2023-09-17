#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("fibo0.in");
ofstream fout("fibo0.out");
int main()
{
    long long a, b;
    long long contor = 0;
    while(fin>>a>>b)
    {
        if(b%a==0)
            contor++;
    }
    fout << contor;
    return 0;
}
