#include <iostream>

using namespace std;
int oglindit(int n)
{
    int ogl = 0;
    while(n)
    {
        ogl = ogl*10 + n%10, n/=10;
    }
    return ogl;
}
long long sumaDiv(int n)
{
    long long sum = 0;
    for(int d=2; d*d<=n; d++)
    {
        if(n%d==0)
            sum += d + n/d;
        if(d*d==n)
            sum -= d;
    }
    sum+=1+n;
    return sum;
}

int main()
{
    int contor, number;
    long long suma = 0;
    cin >> contor;
    for(int i=1; i<=contor; i++)
        cin >> number, suma+=sumaDiv(oglindit(number));

    cout << suma;

    return 0;
}
