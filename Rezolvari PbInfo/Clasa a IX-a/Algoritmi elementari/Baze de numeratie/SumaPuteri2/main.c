#include <stdio.h>
#include <math.h>
int descompunere(int n)
{
    int i = 0;
    while(pow(2,i)<=n)
    {
        i++;
    }
    return i-1;
}

int main()
{
    int number;
    scanf("%d", &number);
    while(number>0)
    {
        number-=pow(2,descompunere(number));
    }
    return 0;
}
