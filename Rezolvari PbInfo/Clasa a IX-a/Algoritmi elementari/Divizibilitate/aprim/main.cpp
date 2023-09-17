#include <iostream>

using namespace std;
bool aproapeNrPrim(int n)
{
    int count = 0;
    while (n%2 == 0)
    {
        n = n/2;
        count++;
    }
    for (int i = 3; i*i<=n; i = i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            count++;
        }
    }
    if (n > 2)
        count++;
    if(count == 2)
        return true;
    else
        return false;
}

int main()
{
    long long a;
    cin >> a;
    if(aproapeNrPrim(a)==true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
