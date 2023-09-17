#include <bits/stdc++.h>
using namespace std;
int sc(int i)
{
    int sum = 0;
    while(i)
    {
        sum += i % 10;
        i/=10;
    }
    return sum;
}
int main()
{
    int n, s;
    cin >> n >> s;
    int min = pow(10, n-1);
    int max = pow(10, n-1) * 9;
    for(int i = 0 ; i < n-1; ++i)
        max+=pow(10, i) * 9;
        int cnt = 0;
    for(int i = min; i <= max; ++i)
    {
        if(sc(i) == s)
        cout << i << ' ', cnt++;
    }
    if(cnt!=0)
    cout << endl << cnt;
    else
       cout << 0;
    return 0;
}
