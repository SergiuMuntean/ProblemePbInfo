#include <iostream>

using namespace std;

int main()
{
    int a, b, c ,d, reuniune;
    cin >> a >> b >> c >> d;
    if((a%3==0 &&b%3==0)&& (c%3==0 && d%3==0))
       reuniune = d / 3 + b / 3 - a  / 3 - c  / 3 + 2;
    else if((a%3==0 &&b%3==0)||(c%3==0 && d%3==0))
    reuniune = d / 3 + b / 3 - a  / 3 - c  / 3 + 1;
    else reuniune = d / 3 + b / 3 - a  / 3 - c  / 3;
    cout << reuniune;
    return 0;
}
