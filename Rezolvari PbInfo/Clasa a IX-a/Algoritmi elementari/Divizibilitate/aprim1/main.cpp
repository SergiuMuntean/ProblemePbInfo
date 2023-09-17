#include <iostream>

using namespace std;

bool aproapePrim(int n)
{

   int contor = 0;
   for(int d=1; d*d<=n; d++)
   {
       if(n%d==0)
        contor+=2;
       if(d*d==n)
        contor--;
   }
   if(contor == 4)
    return true;
   else
    return false;
}

int counter;

int main()
{
    int number , x;
    cin >> number;
    for(int i =1; i<=number; i++)
    {
        cin>>x;
        if(aproapePrim(x))
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
