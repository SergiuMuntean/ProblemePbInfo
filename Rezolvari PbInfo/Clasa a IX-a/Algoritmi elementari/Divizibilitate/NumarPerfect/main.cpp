#include <iostream>

using namespace std;

void numarPerfect(long long n)
{
    long long sum = 0;
    long long dublu = n*2;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0 && i*i<n)
            sum += n/i + i;
        if(i*i==n && n%i==0)
            sum+=i;
    }
    if(dublu == sum)
        cout << n << " este perfect";
    else
        cout << n << " nu este perfect";
}

int main()
{
    long long a;
    cin >> a;
    numarPerfect(a);
    return 0;
}
