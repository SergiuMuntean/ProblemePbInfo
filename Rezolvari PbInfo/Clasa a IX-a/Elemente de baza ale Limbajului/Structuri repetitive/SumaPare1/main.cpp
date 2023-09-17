#include <iostream>

using namespace std;

int main()
{
    int n=1,s=0;
    while(n!=0)
    {
        cin >> n;
        if(n%2==0)
            s = s+n;
    }
    cout << s;
    return 0;
}
