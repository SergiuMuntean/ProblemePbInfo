#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a%3==0)
    {
        cout << a/3-1 << " " << a/3 << " " << a/3+1;
    }
    else
        cout << "NU EXISTA";
    return 0;
}
