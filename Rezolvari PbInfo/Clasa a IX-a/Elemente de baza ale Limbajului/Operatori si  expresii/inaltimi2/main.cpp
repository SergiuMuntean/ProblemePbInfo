#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double a, b, c, h1, h2, h3, p, arie;
    cin >> a >> b >> c;
    if (a + b < c || a + c < b || b + c < a)
        cout << "Imposibil";
    else
    {
        p = (a + b + c) /2;
        arie = sqrt(p*(p-a)*(p-b)*(p-c));
        h1 = 2* arie /b;
        h2 = 2* arie /c;
        h3 = 2* arie /a;
        cout << fixed << setprecision(2) << (int)(h1*100)/ 100.0 << " " << (int)(h2*100)/ 100.0 << " " << (int)(h3*100)/ 100.0;
    }
    return 0;
}
