#include <iostream>
#include <cmath>
using namespace std;

long long transformare(long long numarCurent)
{
    int val = 0;
    long long number = 0;
    int i = 0;
    while(numarCurent)
    {
        int a = numarCurent%10;
        if(a%2==0)
        {
            number = number + a*pow(10,i);
            val = 1;
            i++;
        }
        numarCurent/=10;
    }
    if(val == 1)
        return number;
    else if(val == 0)
        return 0;
}

int main()
{
    long long k;
    long long maxim1 = 0;
    long long maxim2 = 0;
    long long nrNumere;
    cin >> nrNumere;
    long long x;
    for(int i=1; i<=nrNumere; i++)
    {
        cin >> x;
        if(transformare(x)>maxim2)
        {
            maxim1 = x;
            maxim2 = transformare(x);
            k = transformare(x);
        }
        if(transformare(x)==k && x>maxim1)
        {
            maxim1 = x;
        }
    }
    cout << maxim1;
    return 0;
}
