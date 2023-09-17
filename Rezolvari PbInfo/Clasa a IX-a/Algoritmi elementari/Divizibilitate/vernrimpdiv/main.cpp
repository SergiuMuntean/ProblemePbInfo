#include <iostream>

using namespace std;

void verificare(long long n)
{
    long long contor = 0;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
            contor+=2;
        if(n%d==0 && d*d==n)
            contor++;
    }
    if(contor%2==0)
        cout << "nu";
    else
        cout << "da";
}

int main()
{
    long long number;
    cin >> number;
    verificare(number);
    return 0;
}
