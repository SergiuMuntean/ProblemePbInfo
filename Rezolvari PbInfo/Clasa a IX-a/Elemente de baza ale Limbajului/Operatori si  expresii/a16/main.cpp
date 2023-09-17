#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    long long rez = 1;
    rez = 1LL * a*a; // 1LL face conversia lui a * a in long de la int. practic avem long = long.
    rez = rez*rez;
    rez = rez*rez;
    rez = rez*rez;
    cout << rez;
    return 0;
}
