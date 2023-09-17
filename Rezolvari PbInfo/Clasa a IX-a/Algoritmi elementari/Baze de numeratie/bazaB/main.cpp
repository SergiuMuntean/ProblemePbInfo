#include <iostream>

using namespace std;

int maxim(int n, int b)
{
    int maxim = 0;
    while(n)
    {
        if(n%b>maxim)
            maxim = n%b;
        n/=b;
    }
    return maxim;
}

int main()
{
    int number, baza;
    cin >> number >> baza;
    cout << maxim(number,baza);
    return 0;
}
