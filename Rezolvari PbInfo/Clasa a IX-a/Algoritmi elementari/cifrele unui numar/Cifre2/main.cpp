#include <iostream>

using namespace std;

int calcul(int n)
{
    int s = 0;
    while(n)
    {
        if(n<100)
            s = s + n%10;
        n/=10;
    }
    return s;
}

int main()
{
    int a;
    cin >> a;
    cout << calcul(a);
    return 0;
}
