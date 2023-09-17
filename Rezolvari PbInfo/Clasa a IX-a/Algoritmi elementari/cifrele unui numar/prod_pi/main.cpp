#include <iostream>

using namespace std;

long long produs (long long n)
{
    int minim = 10, maxim = 0;
    while(n)
    {
        if((n%10)%2==0 && n%10>maxim)
            maxim = n%10;
        if((n%10)%2==1 && n%10<minim)
            minim = n%10;
        n /= 10;
    }
    return maxim * minim;
}

int main()
{
    long long n;
    cin >> n;
    cout << produs(n);
    return 0;
}
