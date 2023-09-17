#include <stdio.h>

int main()
{
    int a[1000], n, par = 0, impar = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
            par++;
        else
            impar++;
    }
    if(par>impar)
        printf("%d", par-impar);
    else
        printf("%d", impar-par);
    return 0;
}
