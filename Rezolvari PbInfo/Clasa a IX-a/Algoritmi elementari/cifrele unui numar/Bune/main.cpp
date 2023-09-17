#include <iostream>
using namespace std;


int cifMin(int x)
{
    if (!x)
        return x;
    int mini = 9;
    while(x)
    {
        mini = min(mini, x % 10);
        x /= 10;
    }
    return mini;
}
int cifMax(int x)
{
    int maxi = 0;
    while(x)
    {
        maxi = max(maxi, x % 10);
        x /= 10;
    }
    return maxi;
}

int main()
{
    long long a, b, min_a, min_b, max_a, max_b;
    cin >> a >> b;
    min_a = cifMin(a);
    min_b = cifMin(b);
    max_a = cifMax(a);
    max_b = cifMax(b);
    if(min_a == max_b)
        cout << min_a;
    else if(max_a == min_b)
        cout << max_a;
    else
        cout << "NU";
}
