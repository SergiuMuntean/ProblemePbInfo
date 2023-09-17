#include <iostream>
#include <iomanip>
using namespace std;

void medie(long long n)
{
    float numar = 0;
    long long suma = 0;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
        {
            suma += d + n/d;
            numar+=2;
        }
        else if(n%d==0 && d*d==n)
        {
            suma += d;
            numar++;
        }
    }
        float medie = suma/numar;
        cout << fixed << setprecision(2) << (int)(medie*100)/100.0;
}

int main()
{
    long long a;
    cin >> a;
    medie(a);
    return 0;
}
