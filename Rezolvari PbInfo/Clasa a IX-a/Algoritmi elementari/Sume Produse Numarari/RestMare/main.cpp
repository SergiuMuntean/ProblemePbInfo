#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("restmare.in");
ofstream fout("restmare.out");
int main()
{
    long long n, restMare, s=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
        {
            restMare = i%j;
            s = s + restMare;
        }
    }
    cout << s;
    return 0;
}
