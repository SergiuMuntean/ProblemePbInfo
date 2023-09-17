#include <iostream>

using namespace std;

string alternant(long long n)
{
    bool isPar;
   if(n%2==0)
    isPar=true;
   else
    isPar=false;
   n/=10;
   while(n)
   {
        if(isPar)
       {
           if(n%2==0)
                return "nu";
           else isPar = false;
       }
        else if(!isPar)
        {
            if(n%2==1)
                return "nu";
            else isPar = true;
        }
       n/=10;
   }
   return "da";
}

int main()
{
    long long a;
    cin >> a;
    cout << alternant(a);

}
