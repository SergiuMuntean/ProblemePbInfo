#include <iostream>

using namespace std;

void descompunere(int n)
{
    int d = 2, p;
    while(n>1)
    {
        p=0;
        while(n % d == 0)
        {
            ++p;
            n /=d;
        }
        while(p)
        {
            cout << d << ' ';
            p --;
        }
        d++;
        if(n>1 && d*d > n)
            d = n;
    }
}

int main()
{
    int number;
    cin >> number;
    descompunere(number);
    return 0;
}
