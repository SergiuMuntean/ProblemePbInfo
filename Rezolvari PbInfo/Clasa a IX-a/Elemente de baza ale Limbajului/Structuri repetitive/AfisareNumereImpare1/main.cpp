#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==1)
    {
        for(int i=n; i>0; i=i-2)
            cout << i << " ";
    }
    else if(n%2==0)
    {
        for(int i=n-1; i>0; i=i-2)
            cout << i << " ";
    }
    return 0;
}
