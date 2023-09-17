#include <iostream>

using namespace std;

int main()
{   int x, y, n;
    cin >> x >> y >> n;
    int a, z, h;
    int ore_an = x*y; //x*y= cate ore are un an martian
    a = n / ore_an; //nr de ani ai martianului
    int rest_ore = n % ore_an; //ore care nu formeaza intreg
    z = rest_ore / y; //nr de zile ale martianului
    h = rest_ore % y; // nr de ore ale martianului
    cout << a << "\n" << z << "\n" << h;
    return 0;
}
