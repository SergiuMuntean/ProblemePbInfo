#include <iostream>

using namespace std;

string detect(long long n)
{
    int detect1 = 0;
    int detect0 = 0;
    int detectAltele = 0;
    while(n)
    {
        if(n%10==0)
        {
            detect1=1;
        }
        if(n%10==1)
            detect0=1;
        if(n%10!=0 && n%10!=1)
            detectAltele=1;
        n/=10;
    }
    if(detectAltele == 0 && detect1 == 1 && detect0 == 1)
        return "da";
    else return "nu";
}

int main()
{
    long long a;
    cin >> a;
    cout << detect(a);
    return 0;
}
