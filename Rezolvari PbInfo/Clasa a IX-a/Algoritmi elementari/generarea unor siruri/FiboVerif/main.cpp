#include <iostream>

using namespace std;

void fibonacciVerificare(long long n)
{
    long long x;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        int a = 1, b = 1, c;
        int detect = 0;
        if(x==a)
            detect = 1;
        int j = 3;
        while(j<=10)
        {
            c = a + b;
            if(x == c)
                detect = 1;
            a = b;
            b = c;
            j++;
        }
        if(detect == 1)
            cout << "DA\n";
        else if(detect == 0)
            cout << "NU\n";
    }
}
int main()
{
    long long a;
    cin >> a;
    fibonacciVerificare(a);
    return 0;
}
