#include <iostream>

using namespace std;

int main()
{
    int n, x, aux=0, a=-1;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x%2==0)
        {
            a = x;
            aux ++;
        }
    }
    if(aux == 0)
        cout << "IMPOSIBIL";
    else
        cout << a;
    return 0;
}
