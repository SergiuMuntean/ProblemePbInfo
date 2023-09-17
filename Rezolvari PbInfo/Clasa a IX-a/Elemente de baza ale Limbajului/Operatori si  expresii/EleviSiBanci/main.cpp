#include <iostream>

using namespace std;

int main()
{
    int n, m ,e ,b, x, y; //n-cate n elevi, m-cate m elevi, x- elevi, y-banci
    cin >> n >> m >> e >> b;
    y = (m*b+e)/(m-n);
    x = n*y+e;
    cout << x << '\n' << y;
    return 0;
}
