#include <iostream>

using namespace std;

int main()
{
    int n, x, maximGrupa1 = -1, ap;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(i<=n/2 && x>maximGrupa1)
            maximGrupa1 = x, ap=0;
        if(x>maximGrupa1)
            ap++;
    }
    cout << ap;

    return 0;
}
