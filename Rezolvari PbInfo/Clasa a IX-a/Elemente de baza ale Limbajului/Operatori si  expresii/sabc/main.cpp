#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int s1 = 0;
    for (int i=a; i<=b; i++)
    {
        s1 = s1+i;
    }
    int s2 = 0;
    for (int i=b; i<=c; i++)
    {
        s2 = s2+i;
    }
    int s3 = 0;
    for (int i=a; i<=c; i++)
    {
        s3 = s3+i;
    }
    cout << s1 << " " << s2 << " " << s3;
    return 0;
}
