#include <iostream>
#include <cmath>
using namespace std;

int zeceto16(int n)
{
    int result = 0, i = 0;
    while(n)
    {
        if(n%16>=10)
        {
            result+=n%16*pow(10,i);
            i+=2;
        }
        else
        {
            result+=n%16*pow(10,i);
            i++;
        }
        n/=16;
    }
    return result;
}

int main()
{
    int number;
    cin >> number;
    cout << zeceto16(number);
    return 0;
}
