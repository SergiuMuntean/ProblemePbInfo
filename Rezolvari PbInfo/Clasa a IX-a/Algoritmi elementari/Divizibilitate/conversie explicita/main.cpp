#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 15;
    cout << (float) a+(float) b/2;
    cout << endl << a << endl;

    int c = 1000000, d= c;
    long long int e;
    e = (long long int) c*d;
    cout << e;
    return 0;
}
