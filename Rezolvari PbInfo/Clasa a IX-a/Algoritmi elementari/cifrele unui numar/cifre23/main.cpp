#include <iostream>

using namespace std;

void countAparitii(long long n)
{
    long long doi = 0;
    long long trei = 0;
    while(n)
    {
        if(n%10==2)
            doi++;
        if(n%10==3)
            trei++;
        n/=10;
    }
    if(doi>trei)
        cout << 2;
    else if(doi<trei)
        cout << 3;
    else if(doi==trei)
        cout << 2 << ' ' << 3;

}

int main()
{
    long long a;
    cin >> a;
    countAparitii(a);
    return 0;
}
