#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d, A;
    cin >> a >> d >> b >> c;
    A = (a + b) / 2.0 * sqrt(c * c - ((b - a) * (b - a) + c * c - d * d) / (2 * (b - a)) * ((b - a) * (b - a) + c * c - d * d) / (2 * (b - a)));
	if (A > 0)
	{
		cout << fixed << setprecision(2) << ((int)(A * 100))/100.0;
	}
	else
		cout << "Imposibil";

    return 0;
}
