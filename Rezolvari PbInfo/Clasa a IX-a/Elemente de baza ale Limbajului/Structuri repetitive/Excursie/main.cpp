#include <iostream>

using namespace std;

int main()
{
    int z, pb, b, pt, t;
    cin >> z >> pb >> b >> pt >> t;
    for(int i=1; i<=z; i++)
    {
        pb+=b;
        pt+=t;
        if(pb==pt)
        {
            cout << pb;
            break;
        }
    }
    if(pb!=pt)
        cout << "-1";
    return 0;
}
