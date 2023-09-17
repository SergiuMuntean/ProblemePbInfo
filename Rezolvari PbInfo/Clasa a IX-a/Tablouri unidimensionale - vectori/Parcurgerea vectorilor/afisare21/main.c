#include <stdio.h>

int main()
{
    int x[10001], y[10001], n, m, minim = 1000000001;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        scanf("%d", &x[i]);
    scanf("%d", &m);
    for(int j=1; j<=m; j++)
    {
        scanf("%d", &y[j]);
        if(y[j]< minim)
            minim = y[j];

    }
    int counter=0;
    for(int i=1; i<=n; i++)
    {
        int contor = 0;
        {
            if(x[i]<minim)
                contor++;
        }
        if(contor == 1)
            printf("%d ", x[i]), counter++;
    }
    if(counter==0)
        printf("NU EXISTA");
    return 0;
}
