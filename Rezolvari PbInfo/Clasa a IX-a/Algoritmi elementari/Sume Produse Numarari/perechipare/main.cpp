#include <iostream>

using namespace std;

int main()
{
    long long l, r, counter=0;
    cin >> l >> r;
    for(long long i=l; i<=r; i++)
    {
        if(i%2==0)
            counter++;
    }
    cout << counter*counter;
    return 0;
}
