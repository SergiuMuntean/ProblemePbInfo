#include <iostream>

using namespace std;

bool nrPrim(int n)
{
    if(n<2 || n%2==0 && n!=2)
        return false;
    for(int d=3; d*d<=n; d+=2)
    {
        if(n%d==0)
            return false;
    }
    return true;
}

int sumaCif(int n)
{
    int sum = 0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int contor;

int main()
{
    int number, x;
    cin >> number;
    for(int i = 1; i<= number; i++)
    {
        cin >> x;
        if(nrPrim(x) && nrPrim(sumaCif(x)))
            contor++;
    }
    cout << contor;
    return 0;
}
