#include <iostream>
#include <cmath>

using namespace std;

unsigned long long transformare2to10(unsigned long long n)
{
    unsigned long long result = 0, i = 0;
    while(n)
    {
        result += n%10*pow(2,i);
        n/=10;
        i++;
    }
    return result;
}

unsigned long long transformare10to4(unsigned long long n)
{
    unsigned long long result = 0, i = 0;
    while(n)
    {
        result+=n%4*pow(10,i);
        n/=4;
        i++;
    }
    return result;
}

int main()
{
    unsigned long long number;
    cin >> number;
    unsigned long long x = transformare2to10(number);
    cout << transformare10to4(x);
    return 0;
}
