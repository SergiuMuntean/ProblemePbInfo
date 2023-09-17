#include <iostream>

using namespace std;

int bazaMinima(int x)
{
    int maxim = 0, n;
    for(int i = 1; i <= x; i++)
    {
        cin >> n;
        while(n)
        {
            if(n%10>maxim)
                maxim = n%10;
            n/=10;
        }
    }
    return maxim+1;
}

int main()
{
    int numberOfNumbers;
    cin >> numberOfNumbers;
    cout << bazaMinima(numberOfNumbers);
    return 0;
}
