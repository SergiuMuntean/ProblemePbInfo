#include <iostream>

using namespace std;

long long oglindit(long long n)
{
    long long ogl = 0;
    while(n)
    {
        ogl = ogl*10 +n%10;
        n/=10;
    }
    return ogl;
}

long long nrDiv(long long n)
{
    long long contor = 0;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
            contor +=2;
        if(n%d==0 && d*d==n)
            contor ++;
    }
    return contor;
}


int main()
{
    int number;
    cin >> number;
    long long oglindi = oglindit(number);
    cout << nrDiv(oglindi);
    return 0;
}
