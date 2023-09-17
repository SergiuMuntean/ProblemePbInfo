#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("platou4.in");
ofstream fout("platou4.out");
int main()
{
    int n, x, contor=0, value=0, maxim = 0;
    cin >> n;
    int i=1;
    while(cin >> x)
    {
        if(x%2==0 && contor == 0)
        {
            contor=1;
        }
        if(contor)
        {
            cout << x << " ";
        }
        i++;
    }
    return 0;
}
