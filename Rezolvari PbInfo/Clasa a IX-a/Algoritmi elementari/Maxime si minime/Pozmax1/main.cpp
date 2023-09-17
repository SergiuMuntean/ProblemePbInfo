#include<iostream>
using namespace std;
int main()
{
    double n, x, maxim = -1000000000, aparitie1, aparitie2;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x>maxim)
           maxim = x, aparitie1 = i;
        else if(x==maxim)
            aparitie2=i;
    }
    cout << aparitie1 << ' ' << aparitie2;
    return 0;
}
