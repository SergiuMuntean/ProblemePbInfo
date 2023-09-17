#include <iostream>

using namespace std;

int main()
{
    int n = 1, ap = 0, minim = 10000;
    while(n!=0)
    {
        cin >> n;
        if(n>=10 && n<=99 && n<minim)
            ap=1, minim = n;
    }
    if(ap==0)
        cout << "NU EXISTA";
    else cout << minim;
    return 0;
}
