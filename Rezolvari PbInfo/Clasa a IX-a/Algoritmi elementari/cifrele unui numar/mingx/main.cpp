#include <iostream>

using namespace std;
int calcul(long long n, int x)
{
    int contor =0;
    int minim = 10;
    if(n == 0)
        return -1;
    while(n!=0)
    {
        if(n%10>x && n%10<minim)
            minim = n%10, contor = 1;
        n /=10;
    }
    if(contor == 1)
        return minim;
    else if(contor == 0)
        return -1;
}
int main()
{
    long long a;
    int b;
    cin >> a >> b;
    cout << calcul(a, b);
    return 0;
}
