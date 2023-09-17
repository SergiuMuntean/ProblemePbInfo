#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n;
    float cnt, P=1;
    cin >> n;
    float x = (float) 1/n;
    for(int i=1; i<=n; i++)
    {
        cin >> cnt;
        P = P *cnt;
    }
    cout << pow(P,x); //facem ceva la putere rationala care e echivalent cu radicalul de ordin n
    return 0;
}
