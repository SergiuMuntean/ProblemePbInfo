#include <iostream>
using namespace std;
int main()
{
    long long p, k;
    cin >> p >> k;
    long long j = k/2;
    if(k % 2 == 0)
        cout << p + 10 + (j-1)*30;
    else
        cout << p + j*30;
    return 0;
}
