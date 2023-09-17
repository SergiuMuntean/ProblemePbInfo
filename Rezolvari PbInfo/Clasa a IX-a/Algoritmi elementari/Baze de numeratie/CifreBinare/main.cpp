#include <iostream>

using namespace std;

int counter1(int n)
{
    int unu = 0;
    while(n)
    {
        if(n%2==1)
            unu++;
        n/=2;
    }
    return unu;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if(counter1(a)>counter1(b))
        cout << a;
    else
        cout << b;

    return 0;
}
