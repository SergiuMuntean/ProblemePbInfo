#include <iostream>

using namespace std;

long long sumaMicMare(long long n)
{
    long long div1, div2;
    for(int d=2; d*d<=n; d++)
    {
        if(n%d==0 && d*d<n)
        {
                div1 = d;
                div2 = n/d;
                break;
        }

        else if(d*d==n && n%d==0)
        {

            div1 = d;
            div2 = d;
            break;
        }
    }

    return div1+div2;
}

int main()
{
    long long a;
    cin >> a;
    cout << sumaMicMare(a);
    return 0;
}
