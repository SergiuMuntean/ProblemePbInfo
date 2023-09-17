#include <iostream>

using namespace std;

void factorizare(int n)
{
    int d = 2;
    while(n>1)
    {
        int p = 0;
        while(n%d==0)
        {
            n/=d;
            p++;
        }
        if(p)
            cout << d << ' ' << p << '\n';
        d++;
        if(n>1 && d*d>n)
            d = n;
    }
}


int main()
{
    int number;
    cin >> number;
    factorizare(number);
    return 0;
}
