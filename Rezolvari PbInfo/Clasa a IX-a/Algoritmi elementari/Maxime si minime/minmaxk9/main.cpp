#include <iostream>

using namespace std;

int main()
{
    int k, n, maxim = -1000000000, numbers=0;
    cin >> k;
    while(n!=0)
    {
        cin >> n;
        if(n%10==k && n>maxim)
        {
            maxim = n, numbers++;
        }
    }
    if(numbers == 0)
        cout << "NU EXISTA";
    else cout << numbers-1;

    return 0;
}
