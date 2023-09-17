#include <iostream>

using namespace std;
int calculUltimaCifraPara(int n)
{
    long long val = 0;
    if(n==0) return 0;
    while(n)
    {
        if((n%10)%2==0)
        {
            val ++;
            return n%10;
        }
        n/=10;
    }
    if(val == 0)
		return -1;
}
int main()
{
    int a;
    cin >> a;
    cout << calculUltimaCifraPara(a);
    return 0;
}
