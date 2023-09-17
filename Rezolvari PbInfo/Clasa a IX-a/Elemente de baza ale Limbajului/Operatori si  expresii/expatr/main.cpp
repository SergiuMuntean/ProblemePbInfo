#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << floor(((3*(pow(a,2)+pow(a,4)))/(pow(a,2)+pow(a,4)+sqrt(pow(a,2)+pow(a,4)))) + sqrt(pow(a,2)+pow(a,4)));
    return 0;
}
