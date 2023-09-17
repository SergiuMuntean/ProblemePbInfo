#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zmeu.in");
ofstream fout("zmeu.out");

int main()
{
    long long N, M, Z, rest;
    fin >> N >> M;
    Z = N / M /2;
    rest = M*2 - N % (M*2);
    fout << Z <<'\n'<<rest;
    return 0;
}
