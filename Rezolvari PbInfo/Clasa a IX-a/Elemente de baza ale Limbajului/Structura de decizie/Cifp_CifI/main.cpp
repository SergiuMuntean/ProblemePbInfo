#include <iostream>

using namespace std;

int main()
{
    int a, b, par = 0, impar = 0;
    cin >> a >> b;
    int paritate = 1;
    if(a%2==b%2)
    {
        paritate--;
        if(paritate == 0)
        {
            if(a%2==0)
                par++;
            if(b%2==0)
                par++;
            if(a/10%2==0)
                par++;
            if(b/10%2==0)
                par++;
            cout << par;
        }
    }
    else if (a%2!=b%2)
    {
        paritate = 1;
        if(paritate == 1)
        {
            if(a%2==1)
                impar++;
            if(b%2==1)
                impar++;
            if(a/10%2==1)
                impar++;
            if(b/10%2==1)
                impar++;
            cout << impar;
        }
    }

    return 0;
}
