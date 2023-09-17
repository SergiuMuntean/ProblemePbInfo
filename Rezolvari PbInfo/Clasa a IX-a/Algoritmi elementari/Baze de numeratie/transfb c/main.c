#include <stdio.h>
#include <math.h>

long long transformareBazaZece(long long b, long long n)
{
    int x;
    long long putere = n-1;
    long long numar = 0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        numar+= x*pow(b,putere);
        putere--;
    }
    return numar;
}

int main()
{
    long long baza, numar;
    scanf("%lld %lld", &baza, &numar);
    printf("%lld", transformareBazaZece(baza,numar));
    return 0;
}
