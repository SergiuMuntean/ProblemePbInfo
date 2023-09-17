#include <iostream>
using namespace std;

int maxim = 0;
int aparitii = 0;

void maxAparitii(int n)
{
    if(n==0)
    {
        cout << 0 << ' ' << 1;
    }
    while(n)
    {
        if(n%10>maxim)
            maxim = n%10, aparitii = 1;
        else if(n%10==maxim)
            aparitii++;
        n/=10;
    }
    if(aparitii!=0)
        cout << maxim << ' ' << aparitii;
}


int main()
{
    int a;
    cin >> a;
    maxAparitii(a);
    return 0;
}
