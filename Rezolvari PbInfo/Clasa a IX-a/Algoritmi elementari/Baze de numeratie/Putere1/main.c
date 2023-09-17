#include <stdio.h>

long long p_b = 1;

long long Putere(long long a, long long b)
{
   if (b == 0)
      return 1;
   if (b & 1) // impar
      return a * Putere(a, b-1) % p_b;
   else
   {
      long long p = Putere(a, b/2);
      return p * p % p_b;
   }
}

int main()
{
   long long b, n, p, rezultat = 1, i;
   scanf("%lld %lld %lld", &b, &n, &p);
   for (i = 0; i < p; ++i)
      p_b *= 10;

   printf("%lld", Putere(b,n));

   return 0;
}
