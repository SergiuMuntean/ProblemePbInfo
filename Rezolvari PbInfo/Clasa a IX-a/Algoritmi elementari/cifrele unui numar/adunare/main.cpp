#include <iostream>

using namespace std;

void determinare(long long x, long long y)
{
    int detect = 0;
    if(x==0 || y==0)
        cout << "Gigel stie!";
    long long suma = x+y;
    while(x && y)
    {
        if(x%10+y%10>=10)
            detect = 1;
        x/=10;
        y/=10;
    }
    if(detect == 1)
        cout << "Gigel nu stie! El poate cumpara " << suma << " bomboane!";
    else
        cout << "Gigel stie!";
}

int main()
{
    long long a, b;
    cin >> a >> b;
    determinare(a,b);
    return 0;
}
