#include <iostream>

using namespace std;

int main()
{
    int n=1, cnt = 0;
    while (n!=0)
    {
        cin >> n;
        if(n%2==0 && n!=0)
            cnt++;
    }
    if(cnt!=0)
        cout << cnt;
    else if(cnt==0)
        cout << "NU EXISTA";
    return 0;
}
