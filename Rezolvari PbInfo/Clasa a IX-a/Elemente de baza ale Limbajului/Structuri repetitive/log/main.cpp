#include <iostream>

using namespace std;

int main()
{
   int n, m, exp=0;
   cin >> n >> m;
   while(m!=1)
   {
       m=m/n;
       exp++;
   }
   cout << exp;
   return 0;
}
