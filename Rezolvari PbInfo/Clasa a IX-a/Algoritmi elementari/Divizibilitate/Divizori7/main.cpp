#include <iostream>

using namespace std;
long long sumaPrimiDoi(long long n)
{
    int contor = 0;
    long long div1, div2;
    for(int d=2; d<=n/2; d++)
    {
        if(n%d==0)
        {
            div2 = div1;
            div1 = d;
            contor++;
            if(contor == 2)
                break;
        }
    }
    return div1+div2;
}
int main()
{
    long long a;
    cin >> a;
    cout << sumaPrimiDoi(a);
    return 0;
}
