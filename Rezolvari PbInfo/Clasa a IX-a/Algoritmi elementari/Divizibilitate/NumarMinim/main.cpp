#include <iostream>
#include <cmath>

using namespace std;

long long determinareNumar(long long n, long long k)
{
    long long result;
    if(n%10==0)
        result = pow(10,n-1);
    else
        result = pow(10,n-1) +(k-1)%8;
    return result;

}
int main()
{
    long long n, k;
    cin >> n >> k;
    cout << determinareNumar(n,k);
    return 0;
}
