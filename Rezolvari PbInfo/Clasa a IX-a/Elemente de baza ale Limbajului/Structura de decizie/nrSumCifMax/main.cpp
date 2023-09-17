#include <iostream>
using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int suma = a%10+a/10%10;
   int sumb = b%10+b/10%10;
   int sumc = c%10+c/10%10;
   int summax = 0;
   if (suma > summax)
      summax = suma;
   if (sumb > summax)
      summax = sumb;
   if (sumc > summax)
      summax = sumc;

   if (suma == summax)
      cout<<a<<' ';
   if (sumb == summax)
      cout<<b<<' ';
   if (sumc == summax)
      cout<<c;
   return 0;
}
