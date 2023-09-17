#include <iostream>

using namespace std;

int main()
{
    double n, suma = 0, contor=0, mediePare;
    int x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin>> x;
        if(x%2==0)
        {
            suma = suma+x;
        contor++;
        }
    }
    mediePare = suma/contor;
    cout << mediePare;
    return 0;
}
