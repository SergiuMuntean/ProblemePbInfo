#include <iostream>

using namespace std;

int main()
{
    int n, contor = 0, maxim = 0;
    cin >> n;
    if(n==0) cout << "nu exista";
    while(n!=0)
    {
        if((n%10)%2==1 && n%10>maxim)
            maxim = n%10, contor = 1;
        n /= 10;
    }
    if(contor == 0)
        cout << "nu exista";
        else cout << maxim;
    return 0;
}
