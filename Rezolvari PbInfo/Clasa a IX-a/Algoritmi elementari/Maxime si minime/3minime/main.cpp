#include <iostream>

using namespace std;

int main()
{
    int n, minim1=1000000000, minim2=1000000000, minim3=1000000000, x;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x < minim1)
        {
            minim3 = minim2;
            minim2 = minim1;
            minim1 = x;
        }
        else if(x < minim2)
        {
            minim3 = minim2;
            minim2 = x;
        }
        else if(x < minim3)
            minim3 = x;
    }
    cout << minim3 << ' ' << minim2 << ' ' << minim1;
    return 0;
}
