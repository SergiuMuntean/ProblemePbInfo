#include <iostream>

using namespace std;

int main()
{
    int n=1,contor=0;
    while(n!=0)
    {
        cin >> n;
        if(n%2!=0)
            contor++;
    }
    cout << contor;
    return 0;
}
