#include <iostream>

using namespace std;

int main()
{
    int n, x, aux=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x%2==0)
        {
            cout << x;
            aux ++;
            break;
        }
    }
    if(aux == 0)
        cout << "IMPOSIBIL";
    return 0;
}
