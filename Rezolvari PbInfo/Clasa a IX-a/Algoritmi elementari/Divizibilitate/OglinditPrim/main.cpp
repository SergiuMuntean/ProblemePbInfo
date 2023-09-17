#include <iostream>

using namespace std;

int oglindit(int n)
{
    int ogl = 0;
    while(n)
    {
        ogl = ogl*10 + n%10;
        n/=10;
    }
    return ogl;
}

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

long long suma;

int main()
{
    int number, x;
    cin >> number;
    for(int i=1; i<=number; i++)
    {
        cin >> x;
        if(nrPrim(oglindit(x)))
            suma += x;
    }
    cout << suma;
    return 0;
}
