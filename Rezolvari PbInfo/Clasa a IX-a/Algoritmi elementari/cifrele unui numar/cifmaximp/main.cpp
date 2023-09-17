#include <iostream>

using namespace std;

int main()
{
    int n, x, maxim = 0, contor = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        maxim = 0;
        cin >> x;
        while(x!=0)
        {
            if(x%10>maxim)
                maxim = x%10;
            if(maxim%2==1)
                contor++;
            x = x/10;
        }
    }
    cout << contor;
    return 0;
}
