#include <iostream>

using namespace std;

int main()
{
    int s, c, n;
    cin >> s >> c >> n;
    if(s % c==0 && s%n==0)
    {
        cout << "CN";
    }
    else if (s%c ==0)
    {
        cout << "C";
    }
    else if (s%n==0)
    {
        cout << "N";
    }
    else if (s%c!=0 && s%n!=0 && s%(c+n)!=0 || (s<n && s<c))
             cout << "nimic";
    return 0;
}
