#include <iostream>

using namespace std;

void reprezentare(int n)
{
    int cifre0 = 0, cifre1 = 0;
    while(n)
    {
        if(n%2==0)
            cifre0++;
        else
            cifre1++;
        n/=2;
    }
    cout << cifre0 << ' ' << cifre1;
}

int main()
{
    int number;
    cin >> number;
    reprezentare(number);
    return 0;
}
