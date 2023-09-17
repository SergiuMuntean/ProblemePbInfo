#include <iostream>

using namespace std;

    int checkDigits(int n)
    {
        int k;
        cin >> k;
        while(n)
        {
            if(n%10>k)
                return false;
            n/=10;
        }
        return true;
    }
int main()
{
    long long n;
    cin >> n;
    if(checkDigits(n) == false)
        cout << "NU";
    else
        cout << "DA";

    return 0;
}
