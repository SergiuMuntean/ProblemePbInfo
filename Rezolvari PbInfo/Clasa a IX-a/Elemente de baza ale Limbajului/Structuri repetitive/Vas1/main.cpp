#include<iostream>
using namespace std;
int main(){
    long double x;
    long long int t, y, i, T=0;
    cin >> x >> t >> y >> i;
    while (x>y)
    {
        T = T + t;
        x = x - x/i;
    }
    cout << T;
    return 0;
}
