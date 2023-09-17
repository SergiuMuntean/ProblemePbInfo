#include <iostream>

using namespace std;

int main()
{
    int x=1, s=0;
    while(1)
    {
        int temp=x;
        cin >> x;
        s= s+x;
        if(temp==x)
            break;
    }
    cout << s;
    return 0;
}
