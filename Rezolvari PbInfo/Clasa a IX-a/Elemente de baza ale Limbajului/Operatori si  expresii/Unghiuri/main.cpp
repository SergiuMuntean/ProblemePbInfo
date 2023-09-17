#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	const double  pi =3.141592653589;
	//cout << pi;
	double  a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && c + b > a)
	{
		double  A, B, C;
		A = (b * b + c * c - a * a) / (2 * b * c);
		B = (a * a + c * c - b * b) / (2 * a * c);
		C = (a * a + b * b - c * c) / (2 * a * b);
        cout << fixed << setprecision(2);
		cout << ((int)(acos(B) / pi * 180.0 * 100)) / 100.0 << ' ';
		cout << ((int)(acos(C) / pi * 180.0 * 100)) / 100.0 << ' ';
		cout << ((int)(acos(A) / pi * 180.0 * 100)) / 100.0 << ' ';
	}
	else
		cout << "Imposibil";
}
