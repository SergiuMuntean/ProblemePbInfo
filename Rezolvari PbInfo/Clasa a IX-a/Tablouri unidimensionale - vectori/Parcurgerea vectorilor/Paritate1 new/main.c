#include <stdio.h>

int a[10];

void numarare(int a[], int n)
{
    int x = 0, y = 0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]%2==0)
            x++;
        else
            y++;
    }
    if(x>y)
        printf("%d", x-y);
    else
        printf("%d", y-x);

}

int main()
{
    int number;
    scanf("%d", &number);
    for(int i=0; i<number; i++)
        scanf("%d", &a[i]);
    numarare(a, number);
    return 0;
}
