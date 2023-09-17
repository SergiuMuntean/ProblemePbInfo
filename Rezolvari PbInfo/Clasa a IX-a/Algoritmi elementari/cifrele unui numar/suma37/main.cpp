#include <iostream>

using namespace std;

int main()
{
    int n, s=0, contor = 0;
    cin >> n;
    while(n!=0)
    {
        if(n%10>=3 && n%10<=7)
            s = s+n%10, contor = 1;
        n /=10;
    }
    if(contor == 0) cout << 0;
    else cout << s;
    return 0;
}
