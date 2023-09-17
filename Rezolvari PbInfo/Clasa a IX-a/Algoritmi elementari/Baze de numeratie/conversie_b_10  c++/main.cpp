#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
ifstream fin("conversie_b_10.in");
ofstream fout("conversie_b_10.out");
int conversieB10(int n)
{
    int a = 0, b;
    int i = 0;
    fin >> b;
    while(n)
    {
        a += n%10*pow(b,i);
        n/=10;
        i++;
    }
    return a;
}

int main()
{
    int number;
    fin >> number;
    fout << conversieB10(number);
    return 0;
}
