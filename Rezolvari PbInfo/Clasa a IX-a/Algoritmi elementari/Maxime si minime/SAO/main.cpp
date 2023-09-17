#include <iostream>

using namespace std;

int main()
{
    long long n, rezM, putM, rezMTotal= 0, putMTotal= 0, m, armura, sabie, pret, cost, contor = 0, armuraMaxima=0, sabieMaxima=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> rezM >> putM;
        rezMTotal += rezM;
        putMTotal += putM;
    }
    cin >> m;
    for(int i=1; i<=m; i++)
    {
        cin >> armura >> sabie >> pret;
        if(armura>=putMTotal && sabie>= rezMTotal)
           armuraMaxima = armura, sabieMaxima = sabie, cost = pret, contor=1;
    }
    if(contor == 0) cout << -1;
    else if(contor ==1) cout << cost;
    return 0;
}
