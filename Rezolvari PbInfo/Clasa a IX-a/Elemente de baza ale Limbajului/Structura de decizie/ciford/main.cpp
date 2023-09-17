#include <iostream>

using namespace std;

int main()
{
    unsigned int a, s, z, u;
    cin >> a;
    s = a%1000/100;
    z = a%100/10;
    u = a%10;
    if(s<=z && s<=u && z<=u)
        cout << s << " " << z << " " << u;
    else if(s<=z && s<=u && u<=z)
        cout << s << " " << u << " " << z;
    else if(z<=s && z<=u && s<=z)
        cout << z << " " << s << " " << u;
    else if(z<=s && z<=u && u<=s)
        cout << z << " " << u << " " << s;
    else if(u<=s && u<=z && z<=s)
        cout << u << " " << z << " " << s;
    else if(u<=s && u<=z && s<=z)
        cout << u << " " << s << " " << z;
    return 0;
}
